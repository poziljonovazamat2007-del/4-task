#include <stdio.h>

int main()
{
    int son, summa, a, b;
    printf("Sonni kiriting: ");
    scanf("%d", &son);
    summa = son / 100;
    a = (son / 10) % 10;
    b = son % 10;
    printf("Yuzlik raqami: %d", summa+a+b);
    
    
    return 0;
}
