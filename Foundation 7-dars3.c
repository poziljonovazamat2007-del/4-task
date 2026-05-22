#include <stdio.h>

int main() {
    int n;
    printf("Sonni kiiriting: ");
    scanf("%d", &n);
    
    if (n > 0) {
        printf("Musbat son\n");
    } else if (n < 0) {
        printf("Manfiy son\n");
    } else {
        printf("Nol\n");
    }
    
    return 0;
}