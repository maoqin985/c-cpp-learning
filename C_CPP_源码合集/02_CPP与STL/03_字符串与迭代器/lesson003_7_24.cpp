#include<cstdio> 
#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char arr[20]={0};
	int i;
	i=0;
	gets(arr);
	printf("%s\n",arr);
	char arr1[20]={0};
	fgets(arr1,20,stdin);
	printf("%s",arr1);
	while((arr1[i++]=getchar())!='\n');
	cout<<arr1;
	strcpy(arr,arr1);
	cout<<arr;
	return 0;
}
