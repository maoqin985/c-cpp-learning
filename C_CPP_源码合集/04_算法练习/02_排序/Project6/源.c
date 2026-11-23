#include<stdio.h>
int main() {
	int a, b, c;
	while (scanf_s("%d %d %d", &a, &b, &c) == 3) {
		int x, y,z,max;   
		x = (a > b ? a : b);
		z=(b > c ? b : c);
		max = (a > b ? a : b) > (b > c ? b : c) ? x : z;
		if(max!=a)
			if(max!=b||(a>b?a:b))
			printf("%d %d %d",max, (a > b ? a : b), (a < b ? a : b));
		if()
	}
}