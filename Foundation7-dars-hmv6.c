#include <stdio.h>

int main() {
    int son;
    printf("Sonni kiriting: ");
    scanf("%d", &son);
    if (son > 0) 
    printf("Musbat\n");
    else if (son < 0)
     printf("Manfiy\n");
    else 
    printf("Nol\n");
    
    return 0;
}