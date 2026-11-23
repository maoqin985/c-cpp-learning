#include<stdio.h>
#define N 8
void printXing(int n){
	for(int i=0;i<n;i++){
		printf("%s","*****");
	}
	printf("\n");
}
void input(int a[],int n){
	printXing(10);
	printf("请输入%d个人的销售量\n",n);
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	printXing(10);
}
void swap(int *x,int *y){
	int t;
	t=*x;
	*x=*y;
	*y=t;
}
void sort(int a[],int n){
	for(int i=0;i<n-1;i++)
	for(int j=0;j<n-j-1;j++){
		if(a[j]<a[j+1])
		swap(&a[j],&a[j+1]);
	}
}
print(int a[],int n){
printXing(10);
printf("%d个人的销售量排行榜如下：\n",n);
for(int i=0;i<n;i++)
printf("%5d",a[i]);
printf("\n");
printXing(10);
}
int main(){
int a[N]={2,1,4,3,7,6,8,12};
input(a,N);
sort(a,N);
print(a,N);
return 0;
}
