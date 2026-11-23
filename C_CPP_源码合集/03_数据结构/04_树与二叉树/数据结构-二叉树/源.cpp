#include<stdlib.h>
typedef struct BiTNode {
	char data;
	struct BiTNode* lchild, * rchild;
}BiTNode,*BiTree;//二叉树的头结点(链式存储）
typedef struct LinkNode {
	BiTNode* data;
	struct LinkNode* next;
}LinkNode;//链式队列结点
typedef struct {
	LinkNode* front, * rear;
}LinkQueue;//队列队尾
void InitQueue(LinkQueue& m) {
	m.front = m.rear = NULL;
}
bool  EnQueue(LinkQueue& m, BiTree n) {
	LinkNode* p = (LinkNode*)malloc(sizeof(LinkNode));
	p->data = n;
	p->next = NULL;
	m.rear ->next= p;
	m.rear = p;
	return true;
}
bool DeQueue(LinkQueue &Q,BiTNode *p) {
	if (Q.front == Q.rear)
		return false;
	//p = Q.rear->data;
	p = Q.rear->data;
	LinkNode* q = Q.front->next;//设计的是带头结点的链式队列
	Q.front->next = q->next;
	if (Q.rear == q)
		Q.front = Q.rear;
	free(q);
	return true;
}
bool IsEmpty(LinkQueue m) {
	if (m.front == m.rear)
		return true;
	else
		return false;
}
void visit(BiTree T) {

}
//层次遍历二叉树
void LevelOrder(BiTree T) {
	LinkQueue Q;
	InitQueue(Q);//初始化辅助队列
	BiTree p;//树结构体类型指针
	EnQueue(Q, T);//根结点入队
	while (!IsEmpty(Q)) {
		DeQueue(Q, p);
		visit(p);
		if (p->lchild != NULL)
			EnQueue(Q, p->lchild);
		if (p->rchild != NULL)
			EnQueue(Q, p->rchild);
	}
}
int main() {

}