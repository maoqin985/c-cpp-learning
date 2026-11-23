#include<stdio.h>
#include<string.h>
#define N 100
int main() {
	char arr1[N], arr2[N];
	int a;
	scanf_s("%s", arr1,N);
	a = strlen(arr1);
	for (int i = 0; i < a; i++)
		arr2[i] = '*';
	for (int j = 0; j < a; j++) 
		printf("%c", arr2[j]);
	printf("\n");
	for (int k = 0; k < a; k++) {
		if ((a - k-1) == 1)
			break;
		arr2[k] = arr1[k]; arr2[a - k -1] = arr1[a - k-1];
		for (int s = 0; s < a; s++)
			printf("%c", arr2[s]);
		printf("\n");
	}
	return 0;
}