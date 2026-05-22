#include <stdio.h>

int main() {
    int n;
    printf("Sonni kiriting: ");
    scanf("%d", &n);
    if (n % 3 == 0)
     printf("3 ga bo'linadi\n");
    else if (n % 5 == 0) 
    printf("5 ga bo'linadi\n");
    else printf("Bo'linmaydi\n");
    
    return 0;
}