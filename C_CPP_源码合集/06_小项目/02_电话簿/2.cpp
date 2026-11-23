#include<cstdio>
#include<malloc.h>
#include<cstring>
#define MAXSIZE 100
#define null 0
int size=0;

typedef struct{
    char name[10];
    char number[12];
}telephone;
//函数声明: 
telephone t[MAXSIZE];
void create();
int find(int lo,int hi,telephone t[],char*target_value);
void insert(telephone t[],int t_size);
void display(telephone t[],int size);
int remove(telephone t[],char*target_value,int t_size);

void create(){
    int t_size;
    printf("输入需要创建的电话本的大小");
    scanf("%d",&t_size);
    insert(t,t_size+1);
}

void convert(telephone t[],int size){
	int i,j;
	telephone temp;
	for(i=1,j=size;i<j;i++,j--){
//		t[0].number=t[i].number;
//		t[i].number=t[i+size-2].number;
//		t[i+size-2].number=t[0].number;
temp=t[i];
t[i]=t[j];
t[j]=temp;
	}
	return ;
}

int find(int lo,int hi,telephone t[],char target_value[]){//二分查找 
    if(lo>=hi)
	return null;
    if(strcmp(target_value,t[(lo+hi)/2].name)==0)
        return (lo+hi)/2;
    if(strcmp(target_value,t[(lo+hi)/2].name)>0)
        return find((lo+hi)/2+1,hi,t,target_value);
    else if(strcmp(target_value,t[(lo+hi)/2].name)<0)
        return find(lo,(lo+hi)/2,t,target_value);
}

void insert(telephone t[],int t_size){
    int i,j;
    for(i=size+1;i<t_size;i++){
        printf("输入姓名,电话\n");
        scanf("%s %s",t[i].name,t[i].number);
        strcpy(t[0].name,t[i].name);
        strcpy(t[0].number,t[i].number);
        j=i-1;       
        while((strcmp(t[j].name,t[0].name)>0)){
            strcpy(t[j+1].name,t[j].name);
            strcpy(t[j+1].number,t[j].number);
            j--;
        }  
        strcpy(t[j+1].name,t[0].name);
        strcpy(t[j+1].number,t[0].number);
        ++size;
    }
    return;
}

int remove(telephone t[],char*target_value,int t_size){
    int i;
    int location=find(1,t_size,t,target_value);
    if(location==0)return null;
    for(i=location;i<=t_size;i++){
        strcpy(t[i].name,t[i+1].name);
        strcpy(t[i].number,t[i+1].number);
    }
    size--;
    return location;
}

void display(telephone t[],int size){
    for(int i=1;i<=size;i++)
        printf("%d->姓名:%s,号码:%s\n",i,t[i].name,t[i].number);
    return;
}

int main(){
    int i,key=1,create_flag;
    char*c=(char*)malloc(sizeof(char));
    while(key){
        printf("1-创建电话本 2-插入账户信息 3-查找号码 4-删除号码 5-查看所有信息 6-关闭\n");
        scanf("%d",&i);
        switch(i){
            case 1:
			create();
			fflush(stdin);
			create_flag=1;
			break;
            if(create_flag==1){
                case 2:
				insert(t,size+2);
				fflush(stdin);
				break;
                case 3:
                    printf("输入查找的元素,0表示查找失败\n查找的姓名:");
                    scanf("%s",c);
                    printf("所在的位置是%d\n",find(1,size+2,t,c));
                    fflush(stdin);break;
                case 4:
                    printf("输入要删除的元素,0表示删除失败\n删除的姓名:");
                    scanf("%s",c);
                    printf("删除元素的位置是%d\n",remove(t,c,size+1));
                    fflush(stdin);break;
                case 5:
				display(t,size);
				fflush(stdin);
				break;
                case 6:
				convert(t,size);
				fflush(stdin);
				break;
            }
			else printf("未创建电话本,不可进行删除、查找、展示、倒置操作");
            case 7:
			key=0;
			break;
        }
    }
    return 0;
}
