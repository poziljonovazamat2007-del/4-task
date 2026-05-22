#include <stdio.h>

int main() {
    char v;
    printf("Variantni kiriting (A, B, C): ");
    scanf(" %c", &v);
    
    if (v == "A") printf("Variant A\n");
    else if (v == "B") printf("Variant B\n");
    else if (v == "C") printf("Variant C\n");
    else printf("Noto'g'ri variant\n");
    
    return 0;
}