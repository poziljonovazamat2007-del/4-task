#include <stdio.h>

int main()
{
    int son, a, b, summa;
    printf("Sonni kiriting: ");
    scanf("%d", &son);
    a = son / 10;
    b = son % 10;
    printf("sonlar yig'indisi: %d", a+b);
    
    
    return 0;
}