#include<stdio.h>
#include<math.h>
int main() {
	int i = 0;
	for (i; i < 1000; i++) {
		int count=0;
		int k = i;
		while (k) {
			if (k!= 0) {
				k = k / 10;
				count++;
			}
		}
		int sum = 0;
		do {
			int a;
			if (count == 1)
				a = i % 10;
			else 
				a = i / pow(10, count);
				sum += pow(a, count);
				count--;
			
		} while (count > 0);
		if (sum == i)
			printf("%d ", i);
	}
	return 0;
}