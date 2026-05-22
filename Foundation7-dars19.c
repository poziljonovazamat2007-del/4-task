#include <stdio.h>

int main() {
    int yil, oy;
    scanf("%d %d", &yil, &oy);
    if (oy == 1 || oy == 3 || oy == 5 || oy == 7 || oy == 8 || oy == 10 || oy == 12) {
        printf("31\n");
    } else if (oy == 4 || oy == 6 || oy == 9 || oy == 11) {
        printf("30 kun\n"); 
    } else if (oy == 2) {
        if (yil % 400 == 0 || (yil % 4 == 0 && yil % 100 != 0)) {
            printf("29 kun\n");
        } else {
            printf("28 kun\n");
        }
    }
    
    return 0;
}