#include <stdio.h>

int main() {
    char b;
    printf("Belgini kiriting: ");
    scanf(" %c", &b);
    
    if (b == "A") printf("Alo\n");
    else if (b == "E") printf("Yaxshi\n");
    else if (b == "F") printf("Yomon\n");
    else printf("Noto'g'ri baho\n");
    
    return 0;
}