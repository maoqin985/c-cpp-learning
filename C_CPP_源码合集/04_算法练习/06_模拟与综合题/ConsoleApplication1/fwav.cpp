#include<stdio.h>
int main(){
    int s,v;
    scanf("%d %d",&s,&v);
    int hour=7>((s+v-1)/v+10)/60 ? 7-((s+v-1)/v+10)/60 : 24+(7-((s+v-1)/v+10)/60);
	int minute=60-(((s+v-1)/v+10)%60);
    printf("%02d:%02d",hour,minute);
    return 0;
}
