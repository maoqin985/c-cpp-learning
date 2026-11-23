//#include<stdio.h>
//#include<math.h>
//int is_prime(int k) {
//	for (int i = 2; i < sqrt(k); i++)
//		if (k % i == 0)
//			return 0;
//	return 1;
//}
//int main() {
//	int number = 100;
//	for (number; number < 200; number++)
//		if (is_prime(number))
//			printf("%d ", number);
//	return 0;
//
//}
#include<stdio.h>
void  init(int arr[],int a) {
	int i = 0;
	for (i; i < a; i++)
		arr[i] = 0;
}
void print(int arr[],int a) {	
	for (int i = 0; i < a; i++)
		printf("%d", arr[i]);
}
	void reverse(int arr[],int a){
		int temp;
		for (int i = 0; i < a / 2; i++)
			arr[i] = arr[a - 1], temp = arr[i], arr[a-i] = temp;
	}

int main() {
	int arr[] = { 10,2,34,56,54,32,45,89,76 };
	 int a = sizeof(arr) / sizeof(int);
	 return 0;
}
