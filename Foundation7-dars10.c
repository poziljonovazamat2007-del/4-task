#include <stdio.h>

int main() {
    int t;
    printf("Xona haroratini kiriting: ");
    scanf("%d", &t);
    if (t < 18) {
        printf("Xona sovuq\n");
    } else {
        printf("Xona iliq\n");
    }
    
    return 0;
}