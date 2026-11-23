#include<stdio.h>
int main(){
    int s,v;
    scanf("%d %d",&s,&v);
    int hour=(s/v+10)/60,minute=(s/v+10)%60;
    printf("%2d:%2d",hour,minute);
    return 0;
}
