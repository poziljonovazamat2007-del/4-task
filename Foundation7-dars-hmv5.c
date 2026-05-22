#include <stdio.h>

int main() {
    int son;
    printf("Sonni kiriting: ");
    scanf("%d", &son);
    
    if (son % 2 == 0) {
        printf("juft\n");
    } else {
        printf("toq\n");
    }
    
    return 0;
}