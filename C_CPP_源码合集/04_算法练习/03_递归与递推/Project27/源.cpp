//#include<stdio.h>
//int jc(int k) {
//	int sum = 0,m=k;
//	for (int i = 1; i <=4; i++) {
//		int j = i, n = k;
//		while (j) {
//			n*= 10;
//			n+= m;
//			j--;
//		}
//		sum += n;
//	}
//	return (sum+k);
//}
//int main() {
//	int a,sum;
//	scanf_s("%d", &a);
//	sum = jc(a);
//	printf("%d", sum);
//	return 0;
//}
//#include<stdio.h>
//int DigitSum(int n) {
//		int k = 0;
//		if (n <10&&n>0)
//			return n;
//		else {
//			k = n % 10;
//			n /= 10;
//			return DigitSum(n)+k;
//		}		
//			
//}
//int main() {
//	int a;
//	scanf_s("%d", &a);
//	printf("%d", DigitSum(a));
//	return 0;
//}
//#include<stdio.h>
//long cf(int n,int k) {
//	if (k==1)
//		return n;
//	else
//	return n*cf(n, k - 1);
//}
//int main() {
//long a,k;
//	scanf_s("%ld %ld", &a,&k);
//	printf("%ld", cf(a, k));
//	return 0;
//}
#include<stdio.h>
int dg1(int k) {
	if (k == 1 || k == 2)
		return 1;
	else
		return dg1(k - 1) + dg1(k - 2);
}
int dg2(int k) {
	int a = 1, b = 1,c=0;
	if (k == 1 || k == 2)
		return 1;
	else
	while (k>2) {
		c = a + b;
		a = b;
		b = c;
		k--;
	}
	return c;
}
int main() {
	int n,m,a;
	scanf_s("%d", &n);
	m = dg1(n);
	a = dg2(n);
	printf("%d %d", m, a);
	return 0;
}