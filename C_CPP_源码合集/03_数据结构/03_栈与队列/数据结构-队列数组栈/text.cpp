#include<iostream>
#define maxsize 10
using namespace std;
int top1,top2,minval;
//top1 = -1; top2 = -1;全局区只能做变量初始化，不能直接写执行语句。赋值要放到函数里面
int number[maxsize];
int num[maxsize];
bool push(int x) {
	if (top1 >= maxsize - 1) {
		cout << "栈满";
		return false;
	}
	if (top1 == -1)
		minval = x;
	number[++top1] = x;
	num[++top2] = minval > x ? x : minval;
	return true;
}
bool  pop(int &m) {
	if (top1 < -1) {
		return false;
		cout << "栈空";
	}
	num[top2--];
	m = number[top1--];
	return true;
}
int main() {
	top1 = top2 = -1;
	minval = 0;
	return 0;
}