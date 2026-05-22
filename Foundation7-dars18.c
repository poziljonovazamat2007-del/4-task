#include <stdio.h>

int main() {
    int yil;
    scanf("%d", &yil);
    
    if (yil % 400 == 0 || (yil % 4 == 0 && yil % 100 != 0)) {
        printf("Kabisa yili\n");
    } else {
        printf("Kabisa yili emas\n");
    }
    
    return 0;
}