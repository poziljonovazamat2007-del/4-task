#include <stdio.h>

int main() {
    int kun;
    printf("Hafta kunini kiriting: ");
    scanf("%d", &kun);
    
    if (kun == 6 || kun == 7) {
        printf("Dam olish kuni\n");
    } else {
        printf("Ish kuni\n");
    }
    
    return 0;
}