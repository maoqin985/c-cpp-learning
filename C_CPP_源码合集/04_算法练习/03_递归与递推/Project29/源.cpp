#include<stdio.h>
long fb(int n,int m,int b) {
	if (n == 1 || n == 2)
		return 0;
	else
		return (m*fb(n - 1,m,b) +b *fb(n - 2,m,b))%7;
}
int main() {
	int m,n,l;
	scanf_s("%d %d %d", &m,&n,&l);
	printf("%d", fb(m, n, l));
	return 0;
}