#include<iostream>
using namespace std;
struct node {
	int a;
	double b;
	node* next;
}*n1,*n2,*n3,*n4;
node* nodecreation(int n, double m) {
	node* s = new node;
	s->a = n;
	s->b = m;
	s->next = nullptr;
	return s;
}
node* nodecreation(int n, double m,node* h) {
	node* s = new node;
	s->a = n;
	s->b = m;
	s->next = h;
	return s;
}
void printnode(node* n) {
	if (n == nullptr) {
		cout << "NULL" << endl;
		return;
	}
	cout << n->a << ',' << n->b << "-->";
	printnode(n->next);
}
void popfront(node*& ph) {
	if (ph == NULL)
		cout << "该链表是空链表，无法执行" << endl;
	else {
		node* pn = ph;
		ph = pn->next;
		delete pn;
		pn = nullptr;
	}
}
void DestroyList(node*& ph) {
	while (ph != NULL) {
		popfront(ph);
	}
}
void pushhead(node* &ph ,int j, double m) {
	node* pn = new struct node;
	pn->a = j;
	pn->b = m;
	pn->next = ph;
	ph = pn;
}
void pushback(node*& ph, int j, double m) {
	node* pn = new struct node;
	pn->next = NULL;
	ph->next = pn;
	pn->a = j;
	pn->b = m;
}
void popback(node*& ph) {
	if (ph== nullptr)
		cout << "链表为空，无法删除" << endl;
	else
	{
		if (ph->next == NULL) {
			delete ph;
			ph = nullptr;
	}
		else {
			node* tail = ph;
			while (tail->next->next != NULL) {
				tail = tail->next;
			}
			delete tail->next;
			tail->next = nullptr;
		}
	}
}
int main() {
	n4 = nodecreation(4,3.1415);
	n3 = nodecreation(3,3.141,n4);
	n2 = nodecreation(2,3.14,n3);
	n1 = nodecreation(1,3.1,n2);
	printnode(n1);
	node* phead = n1;
	pushhead(n1, 0, 3.0);
	printnode(n1);//1
	pushback(n4,5,3.14159);
	printnode(n1);//2
	popfront(n1);
	printnode(n1);//3
	popback(n1);
	printnode(n1);//4
	DestroyList(n1);
	printnode(n1);
	return 0;
}