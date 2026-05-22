#include <stdio.h>

int main() {
    int yosh;
    printf("Yoshingizni kiriting: ");
    scanf("%d", &yosh);
    
    if (yosh >= 13 && yosh <= 19) {
        printf("O'smir\n");
    }
    
    return 0;
}