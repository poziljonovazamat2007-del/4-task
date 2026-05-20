#include <stdio.h>

int main() {
	int son, a, b;
	printf("Sonni kiriting= ");
	scanf("%d", &son);
	a= son % 10;
	b= (son /10)% 10;
	printf(" Birlik: %d, O'nlik: %d", a, b);
	

	return 0;
}
