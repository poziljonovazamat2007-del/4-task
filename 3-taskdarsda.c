#include <stdio.h>

int main()
{
    int son1, son2;

    printf("1chi qiymat = ");
    scanf("%d", &son1);

    printf("2chi qiymat = ");
    scanf("%d", &son2);

    printf("Ayirma: %d\n", son1 - son2);
    printf("Qo'shish: %d\n", son1 + son2);
    printf("Ko'paytirish: %d\n", son1 * son2);
    printf("Bo'lish: %d\n", son1 / son2);
}
