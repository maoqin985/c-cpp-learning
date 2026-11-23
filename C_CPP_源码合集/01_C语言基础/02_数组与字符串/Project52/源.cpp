//#include<stdio.h>
//int main() {
//	int a = 2;
//	char p = (char)a;
//	printf("%d\n", p);
//	printf("%d", *((char*)&a));
//	return 0;
//}
//#include<stdio.h>
//void* my_memmove(void* destnation, const void* source, size_t num) {
//	size_t count = 0;
//	if (destnation<=source|| (char*)destnation >= ((char*)source + num)) {
//		while (count<num) {
//			*((char*)destnation+count) = *((char*)source + count);
//			count++;
//		}
//	}
//	else {
//		count = num;
//		while (count--){
//			*((char*)destnation + count) = *((char*)source + count);
//		} 	
//	}
//	return destnation;
//
//}
//int main() {
//	int arr[10] = { 1,5,4,7,3,8,9,2,0,6 };
//	my_memmove(arr+2, arr, 20);
//	for (int i = 0; i <10; i++) 
//		printf("%d ", arr[i]);
//	printf("\n");
//	printf("%p", my_memmove(arr + 2, arr, 20));
//	return 0;
//}
//#include<stdio.h>
//int DXpd() {
//	int a = 1;
//	if (*(char*)(&a))
//		return 1;
//	else
//		return 0;
//}
//int main() {
//	if (DXpd)
//		printf("Ð¡¶Ë");
//	else
//		printf("´ó¶Ë");
//	return 0;
//}
#include<stdio.h>
#include<limits.h>
int my_atoi(char* str) {
	long long result = 0;
	int digit=1;
	if (*str == '-')
		digit = -1;
	while (*str) {
		if (*str >= 48 && *str <= 57) {
			result = result * 10 + (*str -'0');
		}
		if (result > INT_MAX)
		return INT_MAX;
		str++;
	}
	if (digit == -1) {
		return result * digit;
	if (result < INT_MIN)
		return INT_MIN;
	}
	return result;
}
int main() {
	char arr[] = "520annda";
	printf("%d", my_atoi(arr));
	return 0;
}