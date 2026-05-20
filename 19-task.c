#include <stdio.h>

int main()
{
    int n, minut, sekund;
    printf("Sekundni kiriting: ");
    scanf("%d", &n);
    minut = n / 60;
    sekund = n % 60;
    printf("%d minut %d sekund", minut, sekund );
    
    
    return 0;
}
