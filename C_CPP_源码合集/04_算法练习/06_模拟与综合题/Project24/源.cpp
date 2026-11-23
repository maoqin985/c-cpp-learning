#include<stdio.h>
int main()
{
	int n = 20,sum=0;
	while (n) {
		sum += n;
		n /= 2;
	}
	printf("¿ÉÒÔºÈ%dÆ¿ÆûË®",sum);
	return 0;
}
//#include<stdio.h>
//int main() {
//	char arr[15] = {"             "};
//	for (int i = 0; i < 13; i++) {
//		if (i < 7) {
//			arr[7 - i] = '*', arr[7+ i] = '*';
//			printf("%s\n", arr);
//		}
//		else {
//			arr[i-6]=' ', arr[20 - i] = ' ';
//			printf("%s\n", arr);
//		}
//		
//	}
//	return  0;
//}
//#include <stdio.h>
//int main() {
//    int i, num, digit, sum;
//    for (i = 0; i < 1000; i++) {
//        num = i;
//        sum = 0;
//        int count = 0;
//        int temp = i;
//        if (temp == 0) {
//            count = 1;
//        }
//        else {
//            while (temp != 0) {
//                temp /= 10;
//                count++;
//            }
//        }
//        num = i;
//        while (num != 0) {
//            digit = num % 10;
//            int p = 1;
//            for (int j = 0; j < count; j++) {
//                p *= digit;
//            }
//            sum += p;
//            num /= 10;
//        }
//        if (sum == i) {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//
//}3
//#include<stdio.h>
//#include<math.h>
//int main() {
//	int i = 0,number,sum1=0,sum2=0;
//	scanf_s("%d", &number);
//	while (number) {
//		int a = number;
//		while (a) {
//			sum1 += number*(pow(10, a));
//			a--;
//		}
//		sum2 += sum1;
//		number--;
//	}
//	printf("%d", sum2);
//	return 0;
//}
