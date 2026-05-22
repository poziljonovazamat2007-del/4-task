#include <stdio.h>

int main() {
    int b;
    printf("Tefoniz quvvati qancha");
    scanf("%d", &b);
    if (b > 50) {
        printf("Batareya yetarli\n");
    } else {
        printf("Zaryadlash kerak\n");
    }
    
    return 0;
}