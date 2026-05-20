#include <stdio.h>

int main() {
	int son, a, b, c;
	printf("Sonni kiriting= ");
	scanf("%d", &son);
	a= son / 100;
	b= (son / 10) % 10;
	c= son % 10;
	printf(" %d", a*100 + c*10 + b);
	

	return 0;
}
