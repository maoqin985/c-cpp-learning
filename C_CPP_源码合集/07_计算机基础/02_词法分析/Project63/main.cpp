#include <stdio.h>
extern "C" {
    int yylex();
    int yywrap();
}
int yywrap() {
    return 1;
}
int main()
{
    printf("开始词法分析：\n");
    yylex();
    return 0;
}
