#include <stdio.h>

int main() {
    int t;
    printf("Haroratni kiriting: ");
    scanf("%d", &t);
    if (t <= 0) {
        printf("Muzlaydi\n");
    } 
    else {
        printf("Muzlamaydi\n");
    }
    
    return 0;
}