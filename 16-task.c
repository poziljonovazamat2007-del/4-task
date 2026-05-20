#include <stdio.h>

int main()
{
    int n, c, a, b;
    printf("Sonni kiriting: ");
    scanf("%d", &n);
    a = n / 100;
    b = (n / 10) % 10;
    c = n % 10;

    printf("Natija: %d\n", b*100 + a*10 + c);
    
    
    return 0;
}
