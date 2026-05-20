#include <stdio.h>

int main()
{
    int x, y, a;

    printf("1-kesmani kiriting: ");
    scanf("%d", &x);
    printf("2-kesmani kiriting: ");
    scanf("%d", &y);
    a=x%y;
    printf("%d qoldiq qoladi", a );

    return 0;
}
