//Shart: A, B va C sonlari berilgan. A ni qiymati B ga, B ni qiymati C ga va C ni qiymati A ga almashtirilsin. A, B va C ning yangi qiymatlari ekranga chiqarilsin.

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
	A = B;
	B = C;
	C = n;
	printf("A= %d B= %d C= %d\n", A, B, C );


	return 0;
}
