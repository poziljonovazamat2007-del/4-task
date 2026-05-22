//8. Sonning qiymat oralig‘i
#include <stdio.h>

int main() {
    int s;
    printf("Sonni kiriting: ");
    scanf("%d", &s);
    
    if (s > 100) 
    printf("Katta\n");
    else if (s > 50)
     printf("O'rtacha\n");
    else printf("Kichik\n");
    
    return 0;
}