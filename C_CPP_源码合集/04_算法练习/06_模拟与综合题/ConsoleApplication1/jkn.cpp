#include<stdio.h>
int main() {
	int k;
	while (scanf("%d", &k) != 0&&k>0) {
		k--;
		int high,sum1=0;
		scanf("%d", &high);
		for (int i = 1; i <=high; i++)
			sum1 += i;
		int arr[sum],*p=arr;
		for(int i=1;i<=high;i++)
		for(int j=0;j<i;j++){
			scanf("%d",*(p+j));
			p++;
		} 
		
		
	}
	return 0;
}
