// 3. Harfni son, belgi yoki harf ekanligi
#include <stdio.h>

int main() {
    char b;
    printf("Harf son yoki belgi kiriting: ");
    scanf(" %c", &b);
    if (b >= '0' && b <= '9') {
        printf("Son\n");
    } else if ((b >= 'A' && b <= 'Z') || (b >= 'a' && b <= 'z')) {
        printf("Harf\n");
    } else {
        printf("Maxsus belgi\n");
    }
    
    return 0;
}