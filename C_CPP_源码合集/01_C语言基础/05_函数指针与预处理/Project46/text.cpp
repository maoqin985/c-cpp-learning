#include <stdio.h>
void print() {
	printf("hehe\n");
}
int main()
{
	//int n = 0x11223344, m = 0x7127417;
	//int* pi = &n;
	//*pi = 0;
	//char* p1 = (char*)n;
	//void* p2 = pi;
	//void* p3 = p1;
	printf("%p %p", &printf, printf);

	return 0;
}