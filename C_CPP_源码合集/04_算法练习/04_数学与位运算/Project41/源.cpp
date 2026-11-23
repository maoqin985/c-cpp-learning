//#include <stdio.h>
//int main() {
//    char killer;
//    for (killer = 'A'; killer <= 'D'; killer++) {
//        int true_count = 0;
//        if (killer != 'A')  true_count++;
//        if (killer == 'C')  true_count++;
//        if (killer == 'D')  true_count++;
//        if (killer != 'D')  true_count++;
//        if (true_count == 3) {
//            printf("经过推理，凶手是：%c\n", killer);
//            break; 
//        }
//    }
//    return 0;
//}
#include<stdio.h>
int main() {
	int arr[10][10] = { 0};
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < i + 1; j++) {
			if (j == 0 || j == i) {
				printf("%d ", 1);
				arr[i][j] = 1;
			}
			else {
				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
				printf("%d ", arr[i - 1][j - 1] + arr[i - 1][j]);
			}

		}
		printf("\n");
	}
	return 0;
}