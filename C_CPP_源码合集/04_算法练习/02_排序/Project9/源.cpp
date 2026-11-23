#include<stdio.h>
int main() {
	int a, b, c;
	while (scanf_s("%d %d %d", &a, &b, &c) == 3) {
		int  sum = a + b + c;
		int x, z, max, mid, min;
		x = (a > b ? a : b);
		z = (b > c ? b : c);
		max = x > z ? x : z;
		mid = x < z ? x : z;
		if (x != z)

			printf("%d %d %d", max, mid, sum - max - mid);

		else if (a > c)
			printf("%d %d %d", b, a, c);
		else
			printf("%d %d %d", b, c, a);
	}
return 0;
}