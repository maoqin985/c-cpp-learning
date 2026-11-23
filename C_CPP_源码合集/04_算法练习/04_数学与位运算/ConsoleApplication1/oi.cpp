#include<stdio.h>
int jc(int k) {
	int sum = 0, m = k;
	for (int i = 1; i <=4; i++) {
		while (i) {
			k*= 10;
			k+= m;
			i--;
		}
		sum += k;
	}
	return (sum+k);
}
int main() {
	int a,sum;
	scanf("%d", &a);
	sum = jc(a);
	printf("%d", sum);
	return 0;
}
