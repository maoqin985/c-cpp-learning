//#include<stdio.h>
//int main() {
//	int i;
//	double sum=0;
//	for (i = 1; i <= 100; i++) 
//		sum = sum + (i % 2 ? (-1.0 / i) : (-1.0 / i));
//	printf("%f", sum);
//	return 0;
//	
//#include<stdio.h>
//int main() {
//	int a, b,count=0,i;
//	for (i = 1; i < 100; i++)
//		if (i / 10 == 9 || i % 10 == 9)
//			count++;
//	printf("%d", count);
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int isprime(int k) {
//	int i = 2;
//	for (i; i < sqrt(k); i++) {
//		if (k % i == 0)
//			return 0;
//		else
//			return 1;
//	}
//	
//}
//int main() {
//	int a,i=100;
//	for (i; i <= 200; i++) {
//		if (isprime(i))
//			printf("%d  ", i);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main() {
//	int year=1000;
//	for (year; year <= 2000; year++)
//		if (year % 4 == 0 && year % 100)
//			printf("%d ", year);
//		else if (year % 400 == 0)
//			printf("%d ", year);
//
//	return 0;
//}
#include <stdio.h>
int gd(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}
int main() {
    int x, y;
    printf("输入两个整数：");
    scanf_s("%d %d", &x, &y);
    printf("最大公因数是：%d\n", gd(x, y));
    return 0;
}