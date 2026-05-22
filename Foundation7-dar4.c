#include <stdio.h>

int main() {
    int n;
    printf("Sonni kiriting: ");
    scanf("%d", &n);
    
    if (n % 5 == 0 || n % 7 == 0) {
        printf("Ha 5 ga yoki 7 ga bo'linadi \n");
    } else {
        printf("Yo'q ikkasigayam bo'linmaydi\n");
    }
    
    return 0;
}