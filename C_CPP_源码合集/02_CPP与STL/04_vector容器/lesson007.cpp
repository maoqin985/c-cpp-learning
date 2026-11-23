#include<vector>//动态顺序表 
using namespace std;
const int N=20;
struct node{
	int a,b,c;
};
//创建
void init(){
	vector<int> al;//创建了一个空的可变长的数组
	vector<int> a2(N);//指定了一个大小为的空间
	vector<int> a3(N,10); // 创建一个大小为 N 的 vector，并且里面的所有元素都是 10
	vector<int> a4={1,2,3,4,5};// 使用列表初始化，创建了一个vector
	// <> 里面可以放任意的类型，这就是模板的作用，也是模板的强大的地方 
// 这样，vector里面就可以放我们接触过的任意数据类型，甚至是 STL
 vector<string> a5;//放字符串 
 vector<node> a6;//放结构体
 vector<vector<int>> a7;//// 甚致可以放一个自己，当成一个二维数组来使用。并且每一维
//都是可变的
 vector<int> a8[N]; // 创建 N 个 vector
}

