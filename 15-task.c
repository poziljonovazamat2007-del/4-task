#include <stdio.h>

int main()
{
    int n, c, a, b;
    printf("Sonni kiriting: ");
    scanf("%d", &n);
    c = n / 100;
    a = (n / 10) % 10;
    b = n % 10;

    printf("Yuzlik raqami: %d\n", a*100 + b*10 + c);
    
    
    return 0;
}
