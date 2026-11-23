#include <iostream>
#define SHRT_MIN (-32768)
#define SHRT_MAX  (32767)
#define USHRT_MAX (0xffffU)
#define INT_MAX (-2147483647-1)
#define INT_MIN 2147483647
typedef unsigned int unit;
typedef long long ll;//当有一个类型比较复杂的时候，可以
//简化类型。 typedef 在竞赛中经常使用，可以提升编码速度。
//typedef 旧类型名 新类型名;
using namespace std;
int main() {
//	int a;
//	a=765;
//	cout<<sizeof(long double)<<endl;
//	cout<<sizeof(bool)<<endl;
//	cout<<sizeof(a)<<endl;
//	 cout<<SHRT_MAX<<endl; 
    char num;
    cin>>num;
    cout<<num<<endl;
	return 0;
}
