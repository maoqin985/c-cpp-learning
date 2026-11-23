#include<stdio.h>
#define N 6
#define M 3
typedef struct student{

int no;
char name[12];
float c[3];
float ave;
}Student;
void average (Student s [],int i,int m) {

int j;
s[i].ave = 0;
for ( j = 0 ; j < m ; j ++ )
{
scanf ("%f", &s[i].c[j]);
s[i].ave = s[i].ave + s[i].c[j];
}
s[i].ave /= m;
}
void input (Student s[],int n,int m){

int i;
for ( i = 0 ; i < n ; i ++ ){
scanf("%d%s",&s[i].no,s[i].name);
average(s, i, m);
}
}
void print(Student s[],int n){

int i;
for( i = 0 ; i < n ; i ++ ){
printf ("%-4d%20s%8.1f%8.1f%8.1f%6.1f\n",s[i].no,s[i].name,
s[i].c[0], s[i].c[1], s[i].c[2], s[i].ave);
}
}
void sort(Student s[], int n){
    int i,j;
    Student t;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(s[j].ave < s[j+1].ave){
                t = s[j];
                s[j] = s[j+1];
                s[j+1] = t;
            }
        }
    }
}
main(){
    Student s[N];
    printf("请输入%d个选手的编号、姓名和%d项成绩:\n",N,M);
    input(s,N,M);
    printf("排序前的结果:\n");
    print(s,N);
    sort(s,N);
    printf("排序后的结果:\n");
    print(s,N);
    printf("前三名结果:\n");
    print(s,3);
    getchar();
}
