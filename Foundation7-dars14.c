#include <stdio.h>

int main() {
    char h;
    printf("Harflarni kiriting: ");
    scanf(" %c", &h);
    
    if (h >= 'A' && h <= 'Z') {
        printf("Katta harf\n");
    } else if (h >= 'a' && h <= 'z') {
        printf("Kichik harf\n");
    } else {
        printf("Harf emas\n");
    }
    
    return 0;
}