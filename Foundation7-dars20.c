#include <stdio.h>
#include <stdlib.h>

int main() {
    int x1, y1, x2, y2;
    printf("Barcha nuqtaning koordinatalarini kiriting: ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    int dx = abs(x1 - x2);
    int dy = abs(y1 - y2);
    if (dx <= 1 && dy <= 1) {
        printf("Yura oladi\n");
    } else {
        printf("Yura olmaydi\n");
    }
    
    return 0;
}