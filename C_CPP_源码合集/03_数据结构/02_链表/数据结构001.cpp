typedef struct Node{
	int data;
	struct Node*next;
}*Linklist,LNode;
void del_X_2(Linklist &L,int x){
	LNode *p=L->next,*r=L,*q;
	while(p!=NULL){
		if(p->data!=x){
		r->next;
		r=p;
		p=p->next;
	}
	else{
		q=p;
		p=p->next;
		free(q);
	}
	}
}
Linklist Delete_Min(Linklist &L){
	LNode*pre=L,p=L->next;
	LNode*minpre=pre,*minp=p;
	while(p!=NULL){
		if(p->data<minp->data){
			minp=p;
			minpre=pre;
		}
		else
		{
			p=p->next;
			pre=p;
		}
	}
	minpre->next=minp->next;
	free(minp);
	return L;
}
