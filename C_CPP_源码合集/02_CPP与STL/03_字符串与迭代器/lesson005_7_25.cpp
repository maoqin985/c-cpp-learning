#include<iostream>
#include<string>

using namespace std;
int main(){
	string s1;
	string s2="ndiqcnakjca";
	string s3="kacn  kcka";
	getline(cin,s1,'q');
	cout<<s1<<endl;
	cout<<s3.size()<<endl;
	cout<<s2.size()<<endl;
	string::iterator it1=s2.begin();
	string::iterator it2=s2.end();
	if(it1<it2)
	cout<<"<"<<endl;
	else
	cout<<">="<<endl;
	cout<<*it1<<' '<<*it2;//迭代器
	for(string::iterator it=s2.begin();it<s2.end();it++){//或者写成auto型 
		cout<<*it<<' ';
	} 
	return 0;
}
