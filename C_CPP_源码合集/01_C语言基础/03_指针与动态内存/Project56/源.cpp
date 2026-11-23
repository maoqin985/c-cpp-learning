#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
    int n;
    scanf_s("%d", &n);
    int* p = (int*)malloc(n * sizeof(int));
    if (p == NULL) 
        return 1;
    for (int i = 0; i < n; i++)
        p[i] = i + 1;
    for (int i = 0; i < n; i++)
        printf("%d ", p[i]);
    printf("\n");
    int* p1 = (int*)realloc(p, 2 * n * sizeof(int));
    if (p1 == NULL)
        return 1;
    memcpy(p1 + n, p1, n * sizeof(int));
    for (int i = 0; i < 2 * n; i++)
        printf("%d ", p1[i]);
    free(p1);
    struct text {
        int number;
        char sex;
        int phonenumber[];
    };
    printf("\n");
    struct text* p2 = (struct text*)calloc(1, 8+10 * sizeof(int));
    if (p2 == NULL)
        return 1;
    
    for (int j = 0; j < 10; j++) {
        p2->phonenumber[j] = j + 1;
        printf("%d ", p2->phonenumber[j]);
    }
    free(p2);
    return 0;
}