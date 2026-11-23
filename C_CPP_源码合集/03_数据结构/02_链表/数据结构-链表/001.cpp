#include<stdlib.h>
typedef struct Node {
	int data;
	struct Node* next;

}Lnode, * LinkList;
//基于单链表的简单排序算法
void swap(const void* p, const void* q) {
	const void *x;
	x = p;
	p= q;
	q = x;
}
//含头指针
void sortLinklist(LinkList L) {
	Lnode* q = (LinkList)malloc(sizeof(LinkList));
	Lnode* r = (LinkList)malloc(sizeof(LinkList));
	Lnode* t,*a,*b;
	for (q = L->next; q != NULL; q = q->next) {
		r = q;
		for (Lnode* p = q->next; p != NULL; p = p->next) {
			if (p->data < r->data)
				r = p;
		}
		if (r!= L)
		{
			for (a = L; a->next != r; a = a->next);
			for (b = L; b->next != q; b = b->next);
			t = q->next;
			q->next = r->next;
			r->next = t;
			a->next = q;
			b->next = r;
		}
	}
	free(q);
	free(r);
}

void seperateList(LinkList& L) {
	 Lnode* s =(Lnode*)malloc(sizeof(Node));
	 Lnode* v= (Lnode*)malloc(sizeof(Node));
	Lnode* r,*k; 
	Lnode* p = L->next;
	int i = 1;
	s->next = v->next = NULL;//头结点创建
	while (p != NULL) {
		if (i++ % 2) {
			r = s->next;
			s = (Lnode*)malloc(sizeof(Node));
			s->data = p->data;
			r = s;
			p = p->next;//尾插法
		}
		else
		{
			/*k= v->next;
			v = (Lnode*)malloc(sizeof(Node));
			v->data = p->data;
			k = v;
			p = p->next;*/
			k = v;
			v = (Lnode*)malloc(sizeof(Node));
			v->data = p->data;
			v->next = k->next;
			k->next = v;//头插法  
		}
	}
	s->next = v->next = NULL;
}