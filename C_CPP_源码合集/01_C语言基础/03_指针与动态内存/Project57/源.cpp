#include<stdio.h>
#include<stdlib.h>
int main() {
	int*p = (int*)malloc(15 * sizeof(int));
	//int p[][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15} };
	if (p == NULL)
		return 0;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 5; j++)
			p[i*5+j] = i + j;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 5; j++)
			printf("%d ", p[i* 5 + j]);
	free(p);
	return 0;
}