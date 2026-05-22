#include <stdio.h>

int main() {
    int yosh;
    printf("Yoshingizni kiriting: ");
    scanf("%d", &yosh);
    if (yosh >= 18) {
        printf("Ruxsat berildi\n");
    } else {
        printf("Ruxsat berilmadi\n");
    }
    
    return 0;
}