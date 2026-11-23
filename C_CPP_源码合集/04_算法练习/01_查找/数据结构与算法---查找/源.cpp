#include<stdlib.h>
#define Maxsize 10
//顺序查找
typedef struct {
	int* elem;
	int TableLen;
}SSTable;
SSTable elen;
int Search_Seq(SSTable ST, int key) {
	ST.elem[0] = key;
	int i;
	for (i = ST.TableLen; ST.elem[i] != key; --i);
	return i;
}
//折半查找(迭代)
int Bimary_Search1(SSTable L, int key) {
	int low = 0, high = L.TableLen - 1, mid;
	while (low <= high) {
		mid = (low + high) / 2;
		if (L.elem[mid] == key)
			return mid;
		else if (L.elem[mid] > key)
			low = mid - 1;
		else
			high = mid + 1;
	}
	return -1;
}
//折半查找(递归)
int low, high,mid;
int Binary_Search2(SSTable ST, int key,int mid) {
	if (ST.elem[mid] == key)
		return mid;
	else if (ST.elem[mid] > key)
		Binary_Search2(ST, key, mid - 1);
	else
		Binary_Search2(ST, key, mid + 1);
	return -1;
}

//王道书P272第6题
int arr[Maxsize][Maxsize];
bool search(int mar[][Maxsize], int key) {
	int n, m;
	n = m = 0;
	for(m;m<Maxsize;m++)
	for (n; mar[m][n]!=key; n++) {
		if (mar[m][n] == key)
			return true;
		if (mar[m][n] > key) {
			n--;
			break;
		}
	}
	return false;
}
typedef struct BiTNode{
	int data;
	struct BiTNode* lchild, * rchild;
}BiNode,*BiTree,BSTNode;

bool isBST(BiTree T) {
	BiNode* p;
	if (T->lchild != NULL) {
		p = T;
		isBST(T->lchild);
	}
	if (T->rchild != NULL) {
		p = T;
		isBST(T->rchild);
	}
	if (p->data >= T->data)
		if (p->rchild) {
			if (p->rchild->data > p->data)
				return true;
			else
				return false;
		}
		else
			return true;
	return false;
}
//正确版本
int pre = INT_MIN;
bool isBST(BiTree T)
{
	if (T == NULL) return true;
	if (!isBST(T->lchild))
		return false;
	if (T->data <= pre)
		return false;
	pre = T->data;
	return isBST(T->rchild);
}
//对该树利用中序遍历来检查

bool check(BiTree T, int low, int high)
{
	if (T == NULL)
		return true;
	if (T->data <= low || T->data >= high)
		return false;
	return check(T->lchild, low, T->data) && check(T->rchild, T->data, high);
}

bool isBST(BiTree T)
{
	return check(T, INT_MIN, INT_MAX);
}
//查给定结点在二叉排序树中的层次
int level(BiTree T,BSTNode *p) {
	int n = 0;//统计查找次数
	BiTree t = T;
	if(t!=NULL)
		while (t->data != p->data) {
			if (t->data < p->data)
				t = t->rchild;
			else
				t = t->lchild;
			n++;
		}
	return n;
}
//非递归算法查找
#include<cmath>
void Judge_AVL(BiTree T, int& balance, int& h) {
	int bl=0, br=0, hl=0, hr=0;
	if (T == NULL)
	{
		balance = 1;
		h = 0;
	}
	else if (T->lchild == NULL && T->rchild) {
		balance = 1;
		h = 1;
	}
	else
	{
		Judge_AVL(T->lchild, balance, hl);
		Judge_AVL(T->rchild, balance, hr);
		h = (hl > hr ? hl : hr) + 1;
		if (abs(hl - hr) < 2)
			balance = bl & br;
		else
			balance = 0;
	}
	}

//查找二叉排序树中最值大小
void Findmax(BiTree T,int &maxnum) {
	if (T == NULL)
		maxnum = -1;
	else {
		while (T->rchild != NULL) {
			T = T->rchild;
		}
		maxnum = T->data;
	}
}

void Findmin(BiTree T, int& minnum) {
	if (T == NULL)
		minnum = -1;
	else {
		while (T->lchild != NULL) {
			T = T->lchild;
		}
		minnum = T->data;
	}
}

//输出不小于k的所有关键字
#include<stdio.h>
void Findkeynum(BiTree T,int k) {
	if (T == NULL)
		return ;
		Findkeynum(T->lchild, k);
		if (T->data >= k)
			printf("%d ", T->data);
		Findkeynum(T->rchild, k);
}
//王道p295第10题
typedef struct BSTree {
	int data,count;
	struct BSTree* rchild, * lchild;
}BSTree,*BStNode;
BStNode Search_Small(BStNode t, int k) {
	if (k<1 || k>t->count)
		return NULL;
	if (t->lchild == NULL) {
		if (k == 1)
			return t;
		else
			return Search_Small(t->rchild, k-1);
	}
	else
	{
		if (t->lchild->count == k - 1)
			return t;
		if (t->lchild->count > k - 1)
			return Search_Small(t->lchild, k);
		if(t->lchild->count<k-1)
			return Search_Small(t->rchild, k);
	}
}
//摩尔投票查找法
int majorityElement(int a[], int n) {
	int candidate, count = 0;
	for (int i = 0; i < n; i++) {
		if (count == 0) {
			candidate = a[i];
			count = 1;
		}
		else
		{
			if (a[i] == candidate)
				count++;
			else
				count--;
		}
	}
	return candidate;
}


int main() {
elen.elem= (int*)malloc(sizeof(int) * Maxsize);
high = elen.TableLen;
low = 0;
mid= (high + low) / 2;
extern int balance, h;
extern int maxnum, minnum;
}