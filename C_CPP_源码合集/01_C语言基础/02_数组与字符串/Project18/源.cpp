#include<stdio.h>
int main() {
	int arr[10],sum=0;
	for (int i = 0; i < 10; i++)
		scanf_s("%d", &arr[i]);
	for (int i = 0; i < 10; i++)
		sum += arr[i];
	printf("%d",sum/10)
	return 0;
}