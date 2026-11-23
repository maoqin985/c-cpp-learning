//#include<stdio.h>
//char* my_strstr(const char* dest, const char* source) {
//	const char* p = source;
//	if (*source == 0)
//		return (char*)dest;
//	while (dest++) {
//		if (*dest== *p)
//			p++;
//		if (*p== 0) {
//			return (char*)(dest-sizeof(*source));
//		}		
//	}
//	if (*dest == 0)
//			return NULL;
//}
//int main() {
//	char arr1[] = "kabckanxawd";
//	char arr2[] = "nxaw";
//	if (my_strstr)
//		printf("%p", my_strstr);

//#include<stdio.h>
//char* my_strstr(const char* dest, const char* source) {
//	 char* p1 = (char*)dest;
//	char* p2,*p3;
//	if (source == NULL||*source=='\0')
//		return (char*)dest;
//	while (*p1) {
//		p2 =(char*)source;
//		p3 = p1;
//		while (*p3 && *p2 && (*p2 == *p3)) {
//			p3++, p2++;
//			if (*p2 == 0)
//				return (char*)p1;
//		}
//		p1++;
//	}
//	return NULL;
//}
//int main() {
//	char arr1[] = "ahjvbschja";
//	char arr2[] = "vbsch";
//	char* p = my_strstr(arr1, arr2);
//	printf("%p",p);
//	return 0;
//}

//#include<stdio.h>
//int my_strcmp(const char* dest, const char* source) {
//	while (*dest == *source) {
//		if (*dest == 0)
//			return 0;
//		dest++, source++;
//	}
//	return *dest - *source;
//}
//int main() {
//	char arr1[] = "ahjvbschja";
//	char arr2[] = "vbsch";
//	printf("%d", my_strcmp(arr1, arr2));
//	return 0;
//}

//#include<stdio.h>
//char* my_strncpy(char* dest, const char* source, size_t num) {
//	char* p = (char*)source;
//	char* ret = dest;
//	while (num) {
//		*dest = *p;
//		dest++, p++;
//		num--;
//	}
//	return ret;
//}
//int main() {
//	char arr1[20] = {"xxxxxxxxxxxxx"};
//	char arr2[] = "abcdefghi";
//	printf("%s\n", arr1);
//	char* str = my_strncpy(arr1, arr2, 5);
//	printf("%s\n", str);
//	return 0;
//}

//#include<stdio.h>
//char* my_strncat(char* dest, const char* source,size_t num) {
//	if (dest == NULL || source == NULL)
//		return NULL;
//	char* ret = dest;
//	char* p1 = (char*)source;
//	while (*dest)
//		dest++;	
//	while (num&&*p1) {
//		*dest = *p1;
//		dest++, p1++;
//		num--;
//	}
//	*dest = '\0';
//	return ret;
//}
//int main() {
//	char arr1[20] = "hehe ";
//	printf("%s\n", arr1);
//	char arr2[] = "xswl";
//	char* str = my_strncat(arr1, arr2, 5);
//	printf("%s\n", str);
//	return 0;
//}

//#include<stdio.h>
//void* my_memcpy(void* destination, const void* source, size_t num) {
//	char* p1 = (char*)destination;
//	char* p2 = (char*)source;
//	size_t number=num*sizeof(source);
//	while (number){
//		*p1 = *p2;
//		p1++, p2++;
//		number--;
//	}
//	return destination;
//}
//int main() {
//	int arr1[20] = { 0 };
//	int arr2[5] = { 1,43,54,67,42 };
//	my_memcpy(arr1, arr2,5);
//	for (int i = 0; i < 5; i++)
//		printf("%d ", arr1[i]);
//	return 0;
//}
#include<stdio.h>
int main() {
    char zf, char arr[6] = "     ";
    scanf_s("%c", &zf);
    for (int i = 0; i < 3; i++) {
        arr[2 + i] = zf, arr[2 - i] = zf;
        printf("%s\n", arr);
    }
    return 0;
}