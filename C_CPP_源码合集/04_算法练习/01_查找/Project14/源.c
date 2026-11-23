#include<stdio.h>
int main() {
	int n;
	int arr[] = {1,2,3,4,5,6,7,8,9,10,12,13 };
	scanf_s("%d",&n);
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0, right = sz - 1, mid = (left + right) / 2;
	while (left <= right) {
		if (arr[mid] > n)
			right = mid - 1;
		else if (arr[mid] < n)
			left = mid + 1;
		else {
			printf("找到了，下标是；%d", mid);
			break;
		}
	}
	if (left > right)
		printf("没找到");
	return 0;
}