#include <stdio.h>

int main() {
    int son;
    printf("Sonni kiriting: ");
    scanf("%d", &son);
    
    if (son % 2 == 0) {
        printf("Juft son\n");
    }
    else {
        printf("Toq son\n");
    }
    
    return 0;
}