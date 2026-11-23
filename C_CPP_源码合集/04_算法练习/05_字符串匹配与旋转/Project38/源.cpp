//#include<stdio.h>
//int main() {
//	int arr[12] = {1,2,3,4,5,6,7,8,9,87,32,43};
//	int* p = arr;
//	for (int i = 0; i < 12; i++)
//		printf("%d ", *(p + i));
//	return 0;
//}
//#include<stdio.h>
//int main(){
//	int arr[13] = { 12,9,7,14,55,43,21,11,26,16,5,13,4},temp,n=0;
//	for (int i = 12; i >= 1; i--) {
//		n++;
//		for (int j = 12; j >= n; j--) {
//			if (arr[j] >arr[j - 1])
//				temp = arr[j - 1], arr[j - 1] = arr[j], arr[j] = temp;
//		}
//		
//	}
//for (int i = 0; i < 13; i++) {
//	printf("%d ", arr[i]);
//}
//	return 0;
//}
#include<stdio.h>
#include<string.h>
int zf(char* m,char*n ,int mk) {
	char arr1[100] = { 0 }, arr2[100] = { 0 };
	for (int i = 0; i < mk; i++) {
		for (int j = 0; j < mk; j++) {
			if (j <= i)
				arr1[j] = *(m + j);
			else
				arr2[j] = *(m + j);
		}
		strcat(arr2, arr1);
		if (strcmp(arr2, n) == 1)
			return 1;	
	}
	char arr1[100] = { 0 }, arr2[100] = { 0 };
	for (int i = 0; i < mk; i++) {
		for (int j = mk-i,g =0; j<mk; j++,g++ ) 
				arr1[g] = *(m + j);
		for(int T=0;T<mk-i;T++)
			arr2[T] = *(m + T);
		strcat(arr1, arr2);
		if (strcmp(arr1, n) == 1)
			return 2;
	}
	return 0;
}
int main() {
	char arr1[100] = { 0 }, arr2[100] = { 0 };
	for (int i = 0; (arr1[i] = getchar()) != '\n'; i++);
	for (int i = 0; (arr2[i] = getchar()) != '\n'; i++);
	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
	arr2[sz2 - 1] = 0;
	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
	arr1[sz1- 1] = 0;
	if (zf(arr2, arr1, sz2) == 1)
		printf("%s右旋后是%s", arr1, arr2);
	else if(zf(arr2,arr1,sz2)==2)
		printf("%s左旋后是%s",arr1,arr2);
	else
		printf("%s旋转后不是%s", arr1, arr2);
	return 0;
}