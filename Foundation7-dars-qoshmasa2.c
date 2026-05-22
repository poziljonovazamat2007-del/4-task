#include <stdio.h>

int main() {
    char b;
    printf("Belgini kiriting: ");
    scanf(" %c", &b);
    
    if (b >= "0" && b <= "9")
     printf("Raqam\n");
    else if ((b >= "A" && b <= "Z") || (b >= 'a' && b <= 'z')) 
    printf("Harf\n");
    else printf("Maxsus belgi\n");
    
    return 0;
}