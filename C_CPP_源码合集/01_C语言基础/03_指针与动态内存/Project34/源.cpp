#include<stdio.h>
int main() {
	int arr[10] = { 4,5,6,23,56,768,5,45,45 };
	int (*p)[10] = &arr;
	for (int i = 0; i < 10; i++) {
		printf("%d ", (*p)[i]);
	}
	return 0;
}