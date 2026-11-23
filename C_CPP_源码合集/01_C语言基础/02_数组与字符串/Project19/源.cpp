//#include<stdio.h>
//int main() {
//	int arr1[10],arr2[10],temp;
//	for (int i = 0; i < 10; i++)
//		scanf_s("%d",&arr1[i]);
//	for (int i = 0; i < 10; i++)
//		scanf_s("%d", &arr2[i]);
//	for (int i = 0; i < 10; i++)
//		temp = arr1[i], arr1[i] = arr2[i], arr2[i] = temp;
//	for (int i = 0; i < 10; i++)
//	printf("%d %d\n",arr1[i],arr2[i]);
//		return 0;
//}

//int bin_search(int arr[], int left, int right, int key) {
//	int mark;
//	while (right > +left) {
//		int mid = (right + left) / 2;
//		if (arr[mid] > key)
//			right = mid - 1;
//		else if (arr[mid] < key)
//			left = mid + 1;
//		else
//			return mid;
//		return 0;
//	}
//
//}
//#include<stdio.h>
//int main() {
//	int row;
//	scanf_s("%d", &row);
//	for (int i = 1; i <= row; i++) {
//		for (int j = 1; j <= i; j++)
//			printf("%dX%d=%d  ", j, i, i * j);
//		printf("\n");
//	}
//	return 0;
//}
