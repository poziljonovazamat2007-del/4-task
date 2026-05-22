#include <stdio.h>

int main() {
    int a, b, c;
    printf("3 ta sonni kiriting:");
    scanf(" %d %d %d", &a, &b, &c);
    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    printf("Eng katta: %d\n", max);
    
    return 0;
}
