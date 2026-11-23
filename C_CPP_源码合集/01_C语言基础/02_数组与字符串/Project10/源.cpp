//#include<stdio.h>
//int main() {
//	int i = 1;
//	for (i; i <= 9; i++) {
//		int a = 1;
//		for (a; a <= i; a++)
//			printf("%dX%d=%d  ", a, i, i * a);
//		printf("\n");
//	}
//	return 0;
//}
#include<stdio.h>
int main(){
	int a[9], i = 0,j=0;
	for (i; i <= 9; i++) 
		scanf_s("%d", a[i]);
	int  max = a[0];
	for (int b = 1; b <= 9; b++) {
		if (max < a[b])
			max = a[b], j = b;
	}
	printf("%d", a[j]);
	return 0;
	}