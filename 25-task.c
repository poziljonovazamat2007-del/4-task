//25. Masala Shart: O‘ngdagi raqam o'chirilib, chapga yozilsin.

#include <stdio.h>

int main() {
    int n, a, b, c;
    printf("Sonni kiriting: ");
    scanf("%d", &n);
    a = n / 100;
    b = (n / 10) % 10;
    c = n % 10;
    printf("Yig'indi: %d", c * 100 + a * 10 + b );
    
    
    return 0;
}
