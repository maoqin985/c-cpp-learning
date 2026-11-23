//#include<stdio.h>
//int main() {
//	int n;
//	while (scanf_s("%d", &n) == 1) {
//		long long arr[30] = { 0 };
//		arr[0] = 1; arr[1] = 1;
//		if (n == 1) {
//			printf("%d\n", 1);
//			continue;
//		}
//		for (int i = 2; i <= n; i++) {
//			arr[i] = arr[i - 1] + arr[i - 2];
//			if (i== n) {
//				printf("%lld\n",arr[i]);
//				break;
//			}
//		}
//
//
//
//	}
//	return 0;
//}
#include <cstdio>

int main() {
    int n;
    while (scanf("%d", &n) == 1) {
        if (n == 1) {
            printf("1\n");
            continue;
        }

        long long a = 1, b = 1;
        while (b < n) {
            long long c = a + b;
            a = b;
            b = c;
        }

        if (b == n) {
            printf("%d\n", n);
        }
        else {
            printf("-1\n");
        }
    }

    return 0;
}