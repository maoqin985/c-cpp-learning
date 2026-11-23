#include<stdio.h>
int arr[30] = { 0 };
int dib(int k) {
	arr[1] = 1, arr[2] = 1;
	if (k == 1 || k == 2)
		return 1;
	for (int i = 3; i <= k; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
		if (i == k)
			return arr[i];
	}
}
	
int main() {
	int k;
	scanf_s("%d", &k);
	int (*fib)(int) = dib;
	int j = (*fib)(k);
	printf("%d", j);
	return 0;
}