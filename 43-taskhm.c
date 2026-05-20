#include <stdio.h>

int main() {
	int son, a, b;
	printf("Sonni kiriting= ");
	scanf("%d", &son);
	a= son / 10;
	b= son % 10;
	printf(" %d ", b*10 + a);
	

	return 0;
}
