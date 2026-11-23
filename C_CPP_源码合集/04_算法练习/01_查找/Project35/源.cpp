#include <stdio.h>
#include <string.h>
int main(void) {
    int T;
    if (scanf("%d", &T) != 1) return 0;
    while (T-- > 0) {
        int n;
        char P[21];                 
        if (scanf("%d %20s", &n, P) != 2) return 0;
        char names[1005][21];
        int found = -1;
        for (int i = 1; i <= n; ++i) {
            if (scanf("%20s", names[i]) != 1) names[i][0] = '\0';
            if (found == -1 && strcmp(P, names[i]) == 0) {
                found = i;
            }
        }
        if (found == -1) {
            printf("-1\n");
        }
        else {
            printf("%d\n", found);
        }
    }

    return 0;
}