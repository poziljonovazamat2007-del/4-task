#include <stdio.h>

int main() {
    int t;
    printf("Xona haroratini kiriting: ");
    scanf("%d", &t);
    if (t > 30) 
    printf("Issiq\n");
    else if (t > 15) 
    printf("O'rtacha\n");
    else printf("Sovuq\n");
    
    return 0;
}