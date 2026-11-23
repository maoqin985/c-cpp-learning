#include <stdio.h>
int main() {
    int num1, num2, num3;
    printf("请输入第一个整数：");
    scanf_s("%d", &num1);
    printf("请输入第二个整数：");
    scanf_s("%d", &num2);
    printf("请输入第三个整数：");
    scanf_s("%d", &num3);
    int sum_result = num1 + num2 + num3;
    int product_result = num1 * num2 * num3;
    printf("这三个整数的和为：%d\n", sum_result);
    printf("这三个整数的乘积为：%d\n", product_result);
    return 0;
}