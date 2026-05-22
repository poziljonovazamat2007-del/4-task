#include <stdio.h>

int main() {
    int son;
    printf("Son kiriting: ");
    scanf("%d", &son);
    if (son < 0 && son % 2 != 0) {
        printf("Ha manfiy va toq\n");
    } 
    else {
        printf("Yo'q ikkovi ham emas\n");
    }
    
    return 0;
}