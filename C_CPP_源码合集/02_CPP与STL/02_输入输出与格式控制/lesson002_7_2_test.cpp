#include<iostream>
#include<iomanip>
using namespace std;
int main(){
//	int arr[5],n;
//	cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
//for(int i=0;i<5;i++){
//	if(i==0){
//     arr[0]/=3;
//	n=arr[0]/3;
//	}
//	if(i==4){
//		arr[i]=(arr[i]+n)/3;
//	}
//	else
//		arr[i]=(arr[i]+arr[i-1])/3;
//		if(i!=0)
//		arr[i-1]+=arr[i];
//	arr[i+1]+=arr[i];
//}
//for(int i=0;i<5;i++)
//printf("%5d",arr[i]);
long a=53621;
cout<<"默认宽度:"<<a<<endl;
cout<<"宽度设置为10:"<<setw(10)<<a<<endl;
cout<<"宽度设置为10且右对齐:"<<setw(12)<<left<< setfill('*')<<a<<endl;
cout << "宽度为10，不够时填充*: " << setw(10) << setfill('*') << a << endl;
cout<<hex<<a<<endl;
cout<<oct<<a<<endl;
	return 0;
}
