// Shart: 999 dan katta sonning mingliklar xonasidagi raqami topilsin.

#include <stdio.h>

int main() {
    int n;
    printf("Sonni kiriting: ");
    scanf("%d", &n);
    printf("Minglar xonasi: %d", (n/1000) % 10 );
    
    
    return 0;
}
