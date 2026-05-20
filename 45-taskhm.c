#include <stdio.h>

int main() {
	int son, a, b, c;
	printf("Sonni kiriting= ");
	scanf("%d", &son);
	a= son % 10;
	b= (son /10)% 10;
	c= son / 100;
	printf(" %d", a*100 + b*10 +c);
	

	return 0;
}
