//#include<stdio.h>
//int my_strlen(char*p) {
//	if (*p)
//		return 1 + my_strlen(p + 1);
//	else
//		return 0;
//}
//int main(){
//	char arr[10] = "oiaouncte";
//	printf("%d", my_strlen(arr));
//	return 0;
//}
//#include<stdio.h>
//int my_strlen( char* p) {
//	char* pp = p;
//	int i = 0;
//	while (*pp++) {
//		i++;
//	}
//	return i;
//}
//int main() {
//	char arr[10] = "oiaouncte";
//	printf("%d", my_strlen(arr));
//	return 0;
//}
//#include<stdio.h>
//char *my_strcat(char*dest,const char*source) {
//	char* p = dest;
//	while (*dest)
//		dest++;
//	while (*dest++ = *source++);
//	return p;
//}
//int main() {
//	char arr1[15] ="hello,";
//	char arr2[7] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}
//#include<stdio.h>
//char *my_strcpy(char*dest,const char*source) {
//	char* p = dest;
//	while (*dest++ = *source++) {
//		if (*dest==0)
//			break;
//	}
//	return p;
//}
//int main() {
//	char arr1[15] ="helloxxxxxxx";
//	char arr2[7] = "world";
//	my_strcpy(arr1, arr2);
//	printf("%s", arr1);
//	return 0;
//}