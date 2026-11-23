#include<stdio.h>
#include<stdlib.h>
#define Maxsize 10
typedef struct BiTNode {
	int data;
	struct BiTNode* lchild, * rchild;
}BiTNode,*BiTree;

typedef struct ThreadNode {
	int data;//数据元素
	struct ThreadNode* lchild, * rchild;//左右孩子指针
	int ltag=0, rtag=0;//左右线索标志
}ThreadNode,*ThreadTree;
//访问结点p;

//辅助全局变量
BiTNode* pre=NULL;
BiTNode* final = NULL;
BiTNode* p;

void visit(BiTNode* q) {
	if (p == q)
		final = p;
	else
		pre = q;
}
//中序遍历
void InOrder(BiTree T) {
	if (T != NULL) {
		InOrder(T->lchild);
		visit(T);
		InOrder(T->rchild);
	}
}
//中序遍历对二叉树线索化的递归运算：
void InThread(ThreadTree &T, ThreadTree &pre) {
	if (T != NULL) {
		InThread(T->lchild, pre);//递归，线索化左子树
		if (T->lchild == NULL) {//当前左子树为空，建立当前结点的前驱结点。
			T->lchild = pre;
			pre = T;
			T->ltag = 1;
		}
		else if(pre!=NULL&&pre->rchild==NULL){
			pre->rchild = T;//建立前驱结点的后继结点
			T->rtag = 1;
		}
		pre = T;
		InThread(T->rchild, pre);//递归，线索化右子树
	}
	}
void CreateInThread(ThreadTree T) {
	ThreadTree pre = NULL;
	if (T != NULL) {
		InThread(T, pre);
		pre->rchild = NULL;
		pre->rtag = 1;
	}
}
//在中序化线索二叉树中找到中序前驱或后继：
//后继：
ThreadTree FindFirst(ThreadNode* T) {
	while (T->ltag == 0)FindFirst(T->lchild);//沿左子树子链走到最左下角
	return T;
}
ThreadTree NextNode(ThreadNode* p) {//求结点p的后继结点
	if (p->rtag == 0) return FindFirst(p->rchild);
	return p->rchild;
}
//非递归的中序遍历：
void Inorder(ThreadTree T) {
	for (ThreadNode* p = FindFirst(T); p != NULL; NextNode(p));
		//visit();
}
//前驱：
ThreadTree FindFFirst(ThreadNode* T) {
	while (T->rtag == 0)FindFirst(T->rchild);//沿左子树子链走到最左下角
	return T;
}
ThreadTree NextForthNode(ThreadNode* p) {//求结点p的前驱结点
	if (p->ltag == 0) return FindFFirst(p->lchild);
	return p->lchild;
}
//1.求树高度:
//2.递归方法:
int TreeDepth(BiTNode* T) {
	if (T == NULL)
		return 0;
	else {
		int l = TreeDepth(T->lchild);
		int r = TreeDepth(T->rchild);
		return l > r ? l + 1 : r + 1;
	}
}//3.层次遍历算法:
int Btdepth(BiTNode* T) {
	if (T == NULL)
		return 0;//树为空高度为0;
	int front, rear, last, level;
	front = rear = -1;
	last = level = 0;
	BiTree p[Maxsize];//初始化辅助队列
	p[++rear] = T;
	BiTree q;
	while (rear > front) {
		q = p[++front];//队列元素出队，即正在访问的结点。
		if (q->lchild != NULL)
			p[++rear] = T->lchild;
		if (q->rchild != NULL)
			p[++front] = T->rchild;
		if (last == front) {
			level++;
			last = rear;
		}
	}
	return level;
}
//判断T二叉树是否为完全二叉树
bool Iscomplete(BiTree T) {
	if (T == NULL)
		return true;
	/*if (T->rchild != NULL) {
		if (T->lchild == NULL)
			return false;
		else if (T->lchild == NULL && T->lchild->lchild == NULL)
			if (T->lchild->rchild)
				return true;
	}*/

	if (!Iscomplete(T->lchild))
		return false;
	if (!Iscomplete(T->rchild))
		return false;
	return true;
}
bool IsCompete(BiTree T)
{
	if (T == NULL)
		return true;
	BiTree queue[1000];
	int front = 0, rear = 0;
	queue[rear++] = T;
	bool flag = false;
	while (front < rear)//队列不为空
	{
		BiTree p = queue[front++];//出队
		if (p == NULL)
		{
			flag = true;
		}
		else
		{
			if (flag)
				return false;
			queue[rear++] = p->lchild;
			queue[rear++] = p->rchild;
		}
	}
	return true;
}
//双分支节点数:
int sum = 0;
int doublenode(BiTree T, int& sum) {
	if (T == NULL)
		return sum;
	if (T->lchild && T->rchild)
		sum++;
	doublenode(T->lchild, sum);
	doublenode(T->rchild, sum);
	return sum;
}
//交换左右子树:
bool ExchangeTree(BiTree T) {
	if (T == NULL)
		return false;	
	BiTree queue[Maxsize];//辅助队列
	int rear=0, front=0;
	queue[rear++] = T;
	BiTree p,q,m;
	while (rear > front) {
		BiTree G = queue[front++];
		p = G->rchild;
		q = G->lchild;
		m = q, q = p, p = m;
		queue[rear++] = G->lchild;
		queue[rear++] = G->rchild;
	}
}
//求第k个结点的值:
int Treedata(BiTree T,int  k) {
	if (T == NULL||k<1)
		return 0;
	BiTree p = T;
	BiTree queue[Maxsize];
	int rear=0, front=0,i=1;
	queue[rear++] = T;
	while (rear > front&&i<=k) {
		BiTree q = queue[front++];
		if (i == k)
			return q->data;
		i++;
		queue[rear++] = q->lchild;
		queue[rear++] = q->rchild;
	}
	return 0;
}
//删除对应根子树:
void DeleteTreeNode(BiTree& T) {
	if (T) {
		DeleteTreeNode(T->lchild);
		DeleteTreeNode(T->rchild);
		free(T);
	}
}
//在二叉树上查找所有以x为元素值的结点，并删除以其为根的子树 
void  Search(BiTree T, int x) {
	BiTree p[Maxsize];
	if (T->data == x) {
		DeleteTreeNode(T);
		exit(0);
	}
	int front, rear;
	front = rear = 0;
	//.........
}
//求以孩子兄弟表示法存储的森林的叶结点数
typedef struct node{
	int data;
	struct node* fch, * nsib;
}*Tree;
int leaves(Tree T) {
	if (T == NULL)
		return 0;
	if (T->fch == NULL)
		return 1 + leaves(T->nsib);//若结点没有孩子(左孩子指针为空)，则它必是叶结点。
	else
		return leaves(T->fch) + leaves(T->nsib);
}
//孩子兄弟表示二叉树:
typedef struct CSNode {
	int data;
	struct CSNode* firstchild, * nextchild;
} CSNode,*CSTree;
int Height1(CSNode* T) {
	int hc, hs;
	if (T == NULL)
		return 0;
	else {
		hc = Height1(T->firstchild);
		hs = Height1(T->nextchild);
		if (hc + 1 > hs)
			return hc + 1;
		else
			return hs;
	}
}
int Height2(CSTree T) {
//........
}
int sum,top;
int stack[10] = {0};
void PrintTree(BiTree T,int x) {
	if (T == NULL)
		return;
	//if (T->data == x) {
	//	printf("%d->%d", );
	//	return;
	//}
	stack[--top] = T->data;
	sum += T->data;
	if (sum == x) {
		int i = 9;
		while (stack[i] != 0) {
			printf("%d->",stack[i--]);
		}
		printf("NULL");
	}
	if (T->lchild == NULL || T->rchild == NULL)
	{
		sum -= T->data;
		return;
	}
	PrintTree(T->lchild,x);
	PrintTree(T->rchild,x);
}
int main() {
	return 0;
	sum = 0;
	top = 10;
}