//#include<stdio.h>
//#include<string.h>
//int zf(char* m, char* n, int mk) {	
//	for (int i = 0; i <mk; i++) {
//	char arr1[100] = { 0 }, arr2[100] = { 0 };
//		for (int j = 0; j <mk; j++) {
//			if (j <= i)
//				arr1[j] = *(m + j);
//			else
//				arr2[j-i-1] = *(m + j);
//		}
//		strcat(arr2, arr1);
//		if (strcmp(arr2, n) == 0)
//			return 1;
//	}
//	for (int i = 0; i < mk; i++) {
//		char arr1[100] = { 0 }, arr2[100] = { 0 };
//		for (int j = mk - i, g = 0; j < mk; j++, g++)
//			arr1[g] = *(m + j);
//		for (int T = 0; T < mk - i; T++)
//			arr2[T] = *(m + T);
//		strcat(arr1, arr2);
//		if (strcmp(arr1, n) == 0)
//			return 2;
//	}
//	return 0;
//}
//int main() {
//	char arr1[100] = { 0 }, arr2[100] = { 0 };
//	for (int i = 0; (arr1[i] = getchar()) != '\n'; i++);
//	for (int i = 0; (arr2[i] = getchar()) != '\n'; i++);
//	int sz2 = strlen(arr2);
//	if (zf(arr2, arr1, sz2) == 1)
//		printf("%s右旋后是%s", arr2, arr1);
//	else if (zf(arr2, arr1, sz2) == 2)
//		printf("%s左旋后是%s", arr2, arr1);
//	else
//		printf("%s旋转后不是%s", arr2, arr1);
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//int zf(const char* m, const char* n, size_t mk) {
//    if (!m || !n) return 0;
//    size_t ln = strlen(n);
//    if (mk != ln) return 0;
//    if (mk == 0) return 0;
//    char* dbl = (char*)malloc(mk * 2 + 1);
//    if (!dbl) return 0;
//    memcpy(dbl, m, mk);
//    memcpy(dbl + mk, m, mk);
//    dbl[mk * 2] = '\0';
//    char* pos = strstr(dbl, n);
//    if (!pos) {
//        free(dbl);
//        return 0;
//    }
//    size_t p = (size_t)(pos - dbl);
//    free(dbl);
//    if (p == 0) return 0;
//    size_t right = mk - p;
//    if (p <= right) return 2;
//    return 1;
//}
//
//int main() {
//    char arr1[101] = { 0 }, arr2[101] = { 0 };
//    if (!fgets(arr1, sizeof arr1, stdin)) return 0;
//    if (!fgets(arr2, sizeof arr2, stdin)) return 0;
//    arr1[strcspn(arr1, "\r\n")] = '\0';
//    arr2[strcspn(arr2, "\r\n")] = '\0';
//    size_t sz1 = strlen(arr1);
//    size_t sz2 = strlen(arr2);
//    int result = zf(arr2, arr1, sz2);
//    if (result == 1)
//        printf("%s右旋后是%s", arr2, arr1);
//    else if (result == 2)
//        printf("%s左旋后是%s", arr2, arr1);
//    else
//        printf("%s旋转后不是%s", arr2, arr1);
//
//    return 0;
//}
#include<stdio.h>
#include<stdbool.h>
bool fing(int*now, int rows, int cols, int row, int col,int target) {
	if (row > rows || col < 0)
		return false;
	int newnumber=*(now + row*cols + col);
	if (newnumber == target) {
		printf("目标值存在且坐标为(%d,%d)", row+1, col+1);
		return true;
	}
	else if(newnumber > target)
		return  fing( now,rows,cols,row,col-1,target);
	else
		return  fing(now, rows, cols, row+1, col, target);	
}
bool pdfing(int*arr, int rows, int cols,int target) {
	if (arr == NULL || rows < 0 || cols < 0)
		return false;
	else
		return  fing(arr, rows, cols, 0, cols - 1, target);
}
int main() {
	int arr[][4] = {
		{12,13,15,18},
		{14,16,17,19},
		{20,23,25,28},
		{21,24,26,30}
	},keynumber;
	scanf_s("%d", &keynumber);
	pdfing((int *)arr, 4, 4, keynumber);
	return 0;
}