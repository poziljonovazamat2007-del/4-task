// Shart: 999 dan katta sonning yuzliklar xonasidagi raqami topilsin. 

#include <stdio.h>

int main() {
    int n;
    printf("Sonni kiriting: ");
    scanf("%d", &n);
    printf("Yuzlik raqami: %d", (n/100) % 10 );
    
    
    return 0;
}
