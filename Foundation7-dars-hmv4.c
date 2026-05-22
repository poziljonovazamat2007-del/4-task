#include <stdio.h>

int main() {
    int kun;
    printf("Kun raqamini kiriting (1-7): ");
    scanf("%d", &kun);
    
    if (kun == 7) {
        printf("Dam olish kuning muborak!\n");
    } else {
        printf("Ish kuni\n");
    }
    
    return 0;
}