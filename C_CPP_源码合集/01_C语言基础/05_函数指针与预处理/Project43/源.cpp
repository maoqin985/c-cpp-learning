//#include<stdio.h>
//int add(int a, int b) {
//	return a + b;
//}
//int sub(int a, int b) {
//	return a - b;
//}
//int mul(int a, int b) {
//	return a * b;
//}
//int div(int a, int b) {
//	return a / b;
//}
//int awyh(int a, int b) {
//	return a ^ b;
//}
//int awh(int a, int b) {
//	return a | b;
//}
//int awy(int a, int b) {
//	return a & b;
//}
//
//int main() {
//	int k,a,b;
//	printf("请选择1--7的数，0代表退出：\n");
//	while (scanf_s("%d", &k) != 0) {
//		printf("请输入俩个数:\n");
//		scanf_s("%d %d",&a, &b);
//		int (*zyb)(int, int);
//		int (*arr[8])(int, int) = { 0,add,sub,mul,div,awyh,awh,awy };
//		zyb = arr[k];
//		printf("结果为:%d", zyb(a, b));
//	}
//		return 0;
//	
//}
//#include<stdio.h>
//#include<stdlib.h>
//struct stu {
//	char name[10];
//	long xuehao;
//	int year;
//};
//struct stu s1[] = { { "mamaoqin",0123,19 },{ "chenghe",0122,23 },{ "longxia",0122,18 } };
//int com_int1(const void* p1, const void* p2) {
//	return *(int*)p1 - *(int*)p2;
//}
//int com_int2(const void* e1, const void* e2) {
//	return ((struct stu*)e1)->year - ((struct stu*)e2)->year;
//}
//int main() {
//	int arr[] = { 56,32,12,67,85,43,23,43,11,8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);	
//	qsort(arr, sz, sizeof(int), com_int1);
//	for (int i = 0; i < sz; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//	qsort(s1,sizeof(s1)/sizeof(s1[0]), sizeof(s1[0]), com_int2);
//	for (int j = 0; j < (sizeof(s1) / sizeof(s1[0])); j++)
//	{
//		printf("%s ", s1[j].name);
//	}
//	return  0;
//}
//#include<stdio.h>
//int comp_arr(const void* p1, const void* p2) {
//	return  (*((int*)p1) - *((int*)p2));
//}
//void swap(const void* a1, const void* a2,int size) {	
//	for (int i = 0; i < size; i++) {
//		char temp = *((char*)a1 + i);
//		*((char*)a1 + i) = *((char*)a2 + i);
//		*((char*)a2 + i) = temp;
//	}
//}
//void newsqrt(void* base, int sz, int type, int(*cmp)(const void*, const void*)) {
//	for (int i = 0; i < sz - 1; i++)
//		for (int j = 0; j < sz - i - 1; j++) {
//			if (cmp((char*)base + j * type, (char*)base + (j + 1) * type) > 0)
//				swap((char*)base + j * type, (char*)base + (j + 1) * type, type);
//		}
//}
//int main() {
//	int arr[10] = { 1,5,3,7,8,4,2,10,6,9 };
//	newsqrt(arr, 10, 4,	comp_arr);
//	for (int i = 0; i < 10; i++) {
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}