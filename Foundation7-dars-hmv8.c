//O‘rta 3: Tarif aniqlash
#include <stdio.h>

int main() {
    int yosh;
    printf("Yoshingizni kiriting: ");
    scanf("%d", &yosh);
    
    if (yosh > 60) printf("Pensiya yoshi\n");
    else if (yosh > 18) printf("Voyaga yetgan\n");
    else printf("Voyaga yetmagan\n");
    
    return 0;
}