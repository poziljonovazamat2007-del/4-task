#include <stdio.h>

int main() {
    int ball;
    printf("Imtihon ballini kiriting: ");
    scanf("%d", &ball);
    
    if (ball >= 50) {
        printf("Imtihondan o'tdi\n");
    } else {
        printf("Imtihondan yiqildi\n");
    }
    
    return 0;
}