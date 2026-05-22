#include <stdio.h>

int main() {
    char b;
    printf("Belgini kiriting: ");
    scanf(" %c", &b);
    
    if (b >= "A" && b <= "Z")
     printf("Katta\n");
    else if (b >= "a" && b <= "z") 
    printf("Kichik\n");
    else printf("Maxsus belgi\n");
    
    return 0;
}