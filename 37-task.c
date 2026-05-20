//Shart: A, B va C sonlari berilgan. A ni qiymati C ga, C ni qiymati B ga va B ni qiymati A ga almashtirilsin. A, B va C ning yangi qiymatlari ekranga chiqarilsin.

#include <stdio.h>

int main() {
	int n, A, B, C;
	printf("A ni kiriting= ");
	scanf("%d", &A);
	printf("B ni kiriting= ");
	scanf("%d", &B);
	printf("C ni kiriting= ");
	scanf("%d", &C);
	n = A;
	A = C;
	C = B;
	B = n;
	printf("A= %d B= %d C= %d\n", A, B, C );


	return 0;
}
