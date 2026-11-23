//#include<stdio.h>
//int main() {
//	printf("%zd", sizeof(unsigned int));
//	return 0;
//}
//#include <stdio.h>
//#include<string.h>
//#define max  10000
//int main() {
//    char arr[max] = {0};
//    for (int i = 0; (arr[i] = getchar()) != '\n'; i++);
//    int lens = strlen(arr);
//    char* pc1 = arr;
//    char* pc2 =( pc1 + lens-2);
//    for (pc2; pc2 >= pc1; pc2--)
//        putchar(*(pc2));
//    return 0;
//#include<stdio.h>
//#include<string.h>
//#define M 10000
//int main() {
//	int k;
//	char arr[M] = { 0 },temp;
//	scanf_s("%s", arr, M), scanf_s("%d", &k);
//	int lens = strlen(arr),a=0;
//	char* pc1 = arr,*pc2=arr+lens-1;
//	char arr2[M] = { 0 };
//	for (int j = 0; j < k; j++) 
//		arr2[j] = arr[j];
//	for (int i = 0; i < lens; i++) {
//		if (i > k-1&&i<= (lens - k - 1))
//			 *(pc1 - k)=*pc1;
//		else if(i>(lens-k-1)) {
//			*pc1 = arr2[a];
//			a++;
//		}
//		pc1++;
//	}	
//	printf("%s", arr);
//	return 0;
//}
//#include<stdio.h>
//#define M 10000
//size_t str(char arr[]) {
//	char* pc = arr;
//	int count=0;
//	while (*pc) {
//		pc++;
//		count++;
//	}
//	return count-1;
//}
//int main() {
//	char arr[M] = { 0 };
//	for (int i = 0; (arr[i] = getchar()) != '\n'; i++);
//	unsigned int lens=str(arr);
//	printf("%lld", lens);
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	int day;
//	while (scanf_s("%d", &day) != 0) 
//		printf("%lld\n", 3 * (2 ^(day - 1)) - 2);
//	return 0;
//#include <cstdio>
//#include <cstdint>
//int main() {
//    int n;
//    unsigned long long fib[61] = { 0 };
//    fib[0] = 0;
//    fib[1] = 1;
//    for (int i = 2; i <= 60; ++i) fib[i] = fib[i - 1] + fib[i - 2];
//    while (scanf("%d", &n) == 1) {
//        if (n < 0) continue;
//        unsigned long long ans = fib[n + 1];
//        printf("%llu\n", ans);
//    }
//    return 0;
//}
#include<stdio.h>
int main() {
	int arr
	return 0;
}