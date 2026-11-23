//#include<stdio.h>	
//int queren[12] = { 0 };
//void qz(int* p) {
//	int* pi = queren,*pr=p;
//	for (int i = 0; i < 12; i++) {
//		if (*p % 2 == 1) {
//			*pi = *p;
//			pi++;
//		}
//		p++;
//	}
//	p = pr;
//	for (int j = 0; j < 12; j++) {
//		if (queren[j] == 0) {
//			for (int r = 0; r < 12; r++) {
//				int m = 0;
//				for (int k = 0; k < 12; k++)
//					if (*(p + r) == queren[k]) {
//						m = 1;
//						break;
//					}
//				if (m == 0&&*(p+r)!=queren[j-1]) {
//
//					queren[j] = *(p + r);
//					break;
//				}
//			}
//
//		}
//	}
//}
//
//int main() {
//	int arr[] = { 12,23,43,54,65,76,87,63,42,68,84,79 };
//	qz(arr);
//	for (int i = 0; i < 12; i++)
//		printf("%d ", queren[i]);
//	return 0;
//}
#include<stdio.h>
int queren[12] = { 0 };
void qz(int arr[]) {
    int idx = 0;
    for (int i = 0; i < 12; i++) {
        if (arr[i] % 2 == 1) {
            queren[idx++] = arr[i];
        }
    }
    for (int i = 0; i < 12; i++) {
        if (arr[i] % 2 == 0) {
            queren[idx++] = arr[i];
        }
    }
}
int main() {
    int arr[] = { 12,23,43,54,65,76,87,63,42,68,84,79 };
    qz(arr);
    for (int i = 0; i < 12; i++) {
        printf("%d ", queren[i]);
    }
    return 0;
}