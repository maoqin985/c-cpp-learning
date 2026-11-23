#include<iostream>
using namespace std;
int number(int n){
	int k=0,m;
	m=n;
	while(n){
	k+=(n%10)*(n%10)*(n%10);
	n/=10;	
	}
	if(k==m)//循环中会修改n的值,所以另存为m 
	return 1;
	else
	return 0;
}
int main(){
	for(int i=100;i<=999;i++){
		if(number(i))
		cout<<i<<endl;
	}
	return 0;
}
