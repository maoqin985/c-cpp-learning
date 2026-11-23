#include<stdio.h>
int main(){
    char zf;
	char arr[6]={' ',' ',' ',' ',' '};
    scanf("%c",&zf);
    for(int i=0;i<3;i++){
        arr[2+i]=zf,arr[2-i]=zf;
        printf("%s\n",arr);
    }
    return 0;
}
