#include<iostream>
#include<string>
using namespace std;
int main(){
	string s1;
	s1="lalala ";
	s1.push_back('h');
	 s1.push_back('v');
	 cout<<s1<<endl;
	 for(char i='a';i<='z';i++)
	 s1.push_back(i);
	  cout<<s1<<endl;
	  //push_back() 在字符串末尾追加一个字符 
	  //string 类型也满足+-%*运算
	  string s2="hallo ";
	  string s3="world";
	  s2+=s3;
	  cout<<s2<<endl;//cout<<s2+"world"<<endl;
	  s2.pop_back();
	  cout<<s2<<s2.size()<<endl;
	   s2.insert(3,1,'x');
	   cout<<s2<<endl;
	   int n=s3.find("or",0);
	   cout<<n<<endl;
	   string s4="sfmnsnvwfa";
	   int j=s4.find("vwf",0,2);
	   cout<<j<<endl;//2表示在s4中查找"vwf"中前两个字符的第一次出现的位置。 
	   cout<<s4.find("vwf",0,2)<<endl;
	   cout<<s4.substr(5)<<endl;
	   //从5的位置默认截取到末尾 
	   //substr函数经常和find函数一起使用
	   cout<<s4.substr(s4.find("nsn"))<<endl;
	   if(s4<s2)//string型按照字典顺序逐个比较 
	   cout<<"大于"<<endl;
	   else
	   cout<<"小于"<<endl; 
	   char arr[]="kabac";//C风格字符串 
	   cout<<(arr!=s4)<<endl;
	   string s5="42ajbc0x98q";
	   size_t* m;
	   cout<<stoi(s5,m,0)<<' '<<m<<endl;//字符开头必须为数字 
       string sb=to_string(100);
	   cout<<sb<<endl;
	   cout << flush;
	return 0;
}
