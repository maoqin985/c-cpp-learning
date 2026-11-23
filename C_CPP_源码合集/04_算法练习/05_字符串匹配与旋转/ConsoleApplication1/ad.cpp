#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int zf(const char* m, const char* n, size_t mk) {
    if (!m || !n) return 0;
    size_t ln = strlen(n);
    if (mk != ln) return 0;
    if (mk == 0) return 0;
    char *dbl = (char*)malloc(mk * 2 + 1);
    if (!dbl) return 0;
    memcpy(dbl, m, mk);
    memcpy(dbl + mk, m, mk);
    dbl[mk * 2] = '\0';
    char *pos = strstr(dbl, n);
    if (!pos) {
        free(dbl);
        return 0;
    }
    size_t p = (size_t)(pos - dbl); 
    free(dbl);
    if (p == 0) return 0; 
    size_t right = mk - p;
    if (p <= right) return 2; 
    return 1; 
}

int main() {
    char arr1[101] = {0}, arr2[101] = {0};
    if (!fgets(arr1, sizeof arr1, stdin)) return 0;
    if (!fgets(arr2, sizeof arr2, stdin)) return 0;
    arr1[strcspn(arr1, "\r\n")] = '\0';
    arr2[strcspn(arr2, "\r\n")] = '\0';
    size_t sz1 = strlen(arr1);
    size_t sz2 = strlen(arr2);
    int result = zf(arr2, arr1, sz2);
    if (result == 1)
        printf("%s右旋后是%s", arr2, arr1);
    else if (result == 2)
        printf("%s左旋后是%s", arr2, arr1);
    else
        printf("%s旋转后不是%s", arr2, arr1);

    return 0;
}
