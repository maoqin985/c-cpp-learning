#include<stdio.h>
#include<stdlib.h>
typedef unsigned char* byte_pointer;
void show_bytes(byte_pointer start, size_t len) {
	for (size_t i = 0; i < len; i++)
		printf("%.2x ", *(start + i));
	printf("\n");
}
void show_long(long n) {
	show_bytes((byte_pointer)&n, sizeof(int));
}
void show_double(double n) {
	show_bytes((byte_pointer)&n, sizeof(double));
}
int is_little_endian() {
	return (char)1;
}
unsigned replace_byte(unsigned x, int i, unsigned char b) {
	unsigned int a = 0xff,c;
	a= ~(0xff << 8 * i);
	x = a & x;
	c = (unsigned int)b << 8 * i;
	return x | c;
}
typedef unsigned float_bits;
float_bits float_negate(float_bits f) {
	if ((f >> 23 & 0xff) == 0xff) {
		if ((f & 0x7fffff) != 0)
			return f;
	}
	else
		return f^(1u<<31);
}
float_bits float_absval(float_bits f) {
	if ((f >> 23 & 0xff) == 0xff) {
		if ((f & 0x7fffff) != 0)
			return f;
	}
	else
		return f&~ (1u<< 31);
}
int float_f2i(float_bits f) {
			 unsigned sign = f >> 31;
			 unsigned exp = (f >> 23) & 0xff;
			 unsigned frac = f & 0x7fffff;
			 int E = exp - 127;
			 if (exp == 0xff)
				 return 0x80000000;
			 if (exp == 0)
				 return 0;
			 unsigned M = frac | (1u << 23);
			 unsigned num;
			 if (E >= 23)
				 num = M << (E - 23);
			 else
				 num = M >> (23 - E);
			 if (sign == 0) {
				 if (num > INT_MAX)
					 return 0x80000000;
				 return (int)num;
			 }
			 else
			 {
				 if (num > 0x80000000u)
					 return 0x80000000;
				 return -(int)num;

			 }
	 
}
int main() {
	int* p = (int*)malloc(4 * sizeof(int));
	show_bytes((byte_pointer)p, 16);
	free(p);
	long n = 1000;
	double m = 19.23;
	show_long(n);
	show_double(m);
	if (is_little_endian())
		printf("小端法\n");
	else
		printf("大端法\n");
	int a, b;
	scanf_s("%x %x", &a, &b);
	a = a &0xFFFFFF00;
	b = b &0xFF;
	printf("%x\n", a | b);
	printf("%x\n",replace_byte(0x12345678, 2, 0xAB));
	float_bits f = 0x4640E400;
	float_bits d = float_negate(0x4640E400);
	float float_f = *(float*)&f;
	float float_m = *(float*)&d;
	printf("%f %f\n", float_f, float_m); 
	float_bits h = 0xC1500000,r=float_absval(h);
	float float_h = *(float*)&h;
	float float_d = *(float*)&r;
	printf("%f %f\n", float_h, float_d);
	float w = -3.9f;
	float_bits t = *(float_bits*)&w;
	printf("%d", float_f2i(w));
	return 0;
}