// 3-QISM: MUSTAQIL ISHLASH UCHUN (IF CHAR) 
// 1. Harfni unli yoki undosh ekanligi

#include <stdio.h>

int main() {
    char h;
    printf("Harfni kiriting: ");
    scanf(" %c", &h);
    if (h == "a" || h == "e"|| h == "i"|| h == "o" || h == "u" ||
        h == "A" || h == "E' || h == "I" || h == "O || h == "U") {
        printf("Unli harf\n");
    } else {
        printf("Undosh harf\n");
    }
    
    return 0;
}