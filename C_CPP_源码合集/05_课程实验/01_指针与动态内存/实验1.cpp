#include<stdio.h>
#include<malloc.h>
int main(){
	int x=10;
	int *p,*q;
	p=&x;
	q=(int *)malloc(sizeof(int));
	*q=100;
	printf("*p=%d,*q=%d",*p,*q);
	free(q);
	return 0;
}
