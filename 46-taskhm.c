#include <stdio.h>

int main() {
	int son, a;
	printf("Sonni kiriting= ");
	scanf("%d", &son);
	a= son % 10;
	printf(" %d", a*100 + son/10 );
	

	return 0;
}
