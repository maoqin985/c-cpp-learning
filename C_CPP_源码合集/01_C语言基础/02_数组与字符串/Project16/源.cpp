#include<stdio.h>
int main() {
	char arr[4];
	int count=0;
		scanf_s("%s",arr,4);
	
	for (int i = 0; i < 3; i++) {
		if (arr[i] =='R')
			count++;
	}
	printf("%d", count);
	return 0;
}