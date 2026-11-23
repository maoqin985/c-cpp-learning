#include<stdio.h>
#include<string.h>
int main() {
    struct stu {
        char name[10];
        int stuID;
        int year;
    } *p, s;
    p = &s;
    p->stuID = 123;
    struct  {
        char name[10];
        int teachID;
        int year;
    }f,*pp;
    s.year = 2007;
    typedef struct str {
        char arr;
        short sub;
        int baa;
       }str;
    str a;
    a = { 's',21,222 };
    printf("%c", a.arr);
    return 0;
}