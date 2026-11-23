#include<stdio.h>
int main(){
	int a;
	scanf_s("%d", &a);
	if (a <= 18)
		printf("少年\n");
	else {
		if (a > 18 && a < 44)
			printf("青年\n");
		else if (a > 45 && a < 59)
			printf("中年\n");
		else if (a > 59 && a < 70)
			printf("老年\n");
		else
			printf("牛逼，准备活到100岁吗？");

	}
	return 0;
	}