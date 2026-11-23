#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char arr[20]={0};
	int n=0;
	cin>>n;
	while(n--){
	int i=0;
	cin>>arr;
	while(arr[i]!='\0'){
	if(arr[0]>=97&&arr[0]<=122)
	arr[0]-=32;
	else if(arr[i]>=65&&arr[i]<=90)
	 arr[i]+=32;
	 i++;
	}	
cout<<arr<<endl;
memset(arr,0,sizeof(arr));
}
	return 0;
}
