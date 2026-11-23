//#include<stdio.h>
//int main() {
//    int arr[10], maxhigh,count=0;
//    for (int i = 0; i < 10; i++)
//        scanf_s("%d ", &arr[i]);
//    scanf_s("%d", &maxhigh);
//    for (int j = 0; j < 10; j++)
//        if (maxhigh < arr[j]) 
//            if (maxhigh + 30 > arr[j])
//                count++;
//    printf("%d", count);
//return 0;
//}
#include<stdio.h>
#define M 100
int main() {
    int l, m, arr[M]={0}, temp;
    scanf_s("%d %d", &l, &m);
    for (int i = 0; i < m; i++)
        scanf_s("%d %d", &arr[i], &arr[i + 1]);
    for (int j = 0; j < m - 1; j++)
        for (int k = 0; k < m; k++)
            if (arr[j] > arr[k])
                temp = arr[j], arr[j] = arr[k], arr[k] = temp;
    int x = arr[m - 1] - arr[0];
    printf("%d", l - x);
    return 0;
}