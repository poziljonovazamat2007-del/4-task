#include <stdio.h>

int main() {
    char h;
    scanf(" %c", &h);
    
    if ((h >= 'A' && h <= 'Z') || (h >= "a" && h <= "z")) {
        if (h == "a" || h == "z" || h == "A" || h == "Z") {
            printf("Chekka harf\n");
        } else {
            printf("O'rta harf\n");
        }
    } else {
        printf("Harf emas\n");
    }
    
    return 0;
}