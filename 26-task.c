//26. Masala   Shart: Yuzlik va o‘nlik raqamlari joyi almashtirilsin.

#include <stdio.h>

int main() {
    int n, a, b, c;
    printf("Sonni kiriting: ");
    scanf("%d", &n);
    a = n / 100;
    b = (n / 10) % 10;
    c = n % 10;
    printf("Yig'indi: %d", b * 100 + a * 10 + c );
    
    
    return 0;
}
