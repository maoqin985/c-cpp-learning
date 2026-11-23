#include<stdio.h>
int main() {
	int year;
	scanf_s("%d", &year);
	if (year % 4 ==0&& year % 100)
		printf("ÊÇÈòÄê\n");
	return 0;
}