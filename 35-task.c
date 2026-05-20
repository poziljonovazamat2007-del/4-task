//Shart:Berilgan A va B sonlarining qiymatlarini almashtiring. A va B ning yangi qiymati ekranga chiqarilsin

#include <stdio.h>

int main() {
	int n, A, B;
	printf("A ni kiriting= ");
	scanf("%d", &A);
	printf("B ni kiriting= ");
	scanf("%d", &B);
	n = A;
	A = B;
	B = n;
	printf("A= %d B= %d\n", A, B );


	return 0;
}
