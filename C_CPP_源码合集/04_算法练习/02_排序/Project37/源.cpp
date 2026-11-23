#include<stdio.h>
#include <stdlib.h>
#include <string.h>
int comple(const void*p1,const void*p2) {
	if (*(int*)p1 > *(int*)p2)
		return 1;
	else if (*(int*)p1 < *(int*)p2)
		return -1;
	else
		return 0;
}
int main() {
	int arr[10] = {10,89,67,43,68,31,49,90,68,11};
	qsort(arr, 10,4, comple);
	return 0;
}