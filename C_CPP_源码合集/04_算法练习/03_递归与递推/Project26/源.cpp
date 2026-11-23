#include<stdio.h>
int jump(int n) {
	if (n == 2)
		return 2;
	else if (n == 1)
		return 1;
	return jump(n - 1) + jump(n - 2);
}
int main() {
	int n, m;
	printf("请输入青蛙要跳的级数：\n");
	scanf_s("%d", &n);
	m=jump(n);
	printf("%d", m);
	return 0;
}