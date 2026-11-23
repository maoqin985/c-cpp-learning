#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define maxsize 10000
#define LISTSIZE 100
#define OK 1
#define OVERFLOW -1

typedef int element;
typedef struct{
    element *elem;
    int length;
    int listsize;
}Sq;

int initList(Sq *L);//初始化 
void display(Sq *L);
void sort(Sq *L, int k);
void create(Sq *L, int k);
void Union(Sq *L, Sq *L1, Sq *L2);//合并 

int initList(Sq *L){
    L->elem = (element *)malloc(maxsize*sizeof(element));
    if(!L->elem) return -1;//初始化失败 
    L->length = 0;
    L->listsize = maxsize;
    return 0;
}

void sort(Sq *L, int k){//冒泡排序 
    int i,j,flag=0;
    element t;
    for(i=0;i<k;i++){
        for(j=0;j<k-i-1;j++){
            flag=1;
            if(L->elem[j]>L->elem[j+1]){
                t = L->elem[j];
                L->elem[j] = L->elem[j+1];
                L->elem[j+1] = t;
            }
        }
    }
}

void create(Sq *L, int k, char name){
    int i,j;
    printf("请输入%d的整数\n",k);
    for(i=0;i<k;i++){
        scanf("%d",&L->elem[i]);
    }
    L->length = k;
    sort(L,k);
    printf("线性表%c排序后结果为:\n",name);
    display(L);
}

void display(Sq *L){
    int i;
    for(i=0;i<L->length;i++){
        printf("%3d ",L->elem[i]);
    }
    printf("\n");
}

void Union(Sq *L, Sq *L1, Sq *L2){
    int k = L1->length + L->length;
    int i=0,t=0,g=0,j=0;
    initList(L2);
    while(i<L1->length && j<L->length){
        if(L->elem[i] < L1->elem[j]){
            L2->elem[g++] = L->elem[i];
            i++;
        }else{
            L2->elem[g++] = L1->elem[j];
            j++;
        }
    }
    
    while(i<=L->elem[i]){
        L2->elem[g++] = L->elem[i];
        i++;
    }
    
    while(j<=L1->elem[j]){
        L2->elem[g++] = L1->elem[j];
        j++;
    }
    L2->length = L1->length + L->length;
}

int main(){
    Sq L, L1, L2;
    int n,i,m,x;
    printf("请输入两个线性表的长度 m,n:");
    scanf("%d%d",&m,&n);
    initList(&L);
    initList(&L1);
    create(&L, m, 'A');
    create(&L1, n, 'B');
    Union(&L, &L1, &L2);
    printf("合并后的结果:\n");
    display(&L2);
    return 0;
}
