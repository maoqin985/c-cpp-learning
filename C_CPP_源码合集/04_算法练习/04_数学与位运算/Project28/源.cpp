#include<stdio.h>
int main() {
	int n, arr[32] = { 0 };
	scanf_s("%d", &n);
	for (int i = 0; i < 32; i ++) {
		arr[i] = n % 2;
		n /= 2;
	}
	printf("偶数位：");
	for (int i = 1; i < 32; i += 2) 	
		printf("%d ", arr[i]);
	printf("\n");
	printf("奇数位：");
	for (int i = 0; i < 32; i += 2) 
		printf("%d ", arr[i]);
	return 0;
}