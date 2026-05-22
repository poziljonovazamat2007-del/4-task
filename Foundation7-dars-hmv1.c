#include <stdio.h>

int main() {
    int n;
    printf("Sonni kiriting: ");
    scanf("%d", &n);
    if (n % 5 == 0) {
        printf("5 ga bo'linadi\n");
    }
    
    return 0;
}