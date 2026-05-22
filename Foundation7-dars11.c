#include <stdio.h>

int main() {
    float b1, b2, b3, b4;
    printf("4 ta son kiriting: ");
    scanf("%f %f %f %f", &b1, &b2, &b3, &b4);
    
    float ortacha = (b1 + b2 + b3 + b4) / 4.0;
    
    if (ortacha >= 4.5 && ortacha <= 5.0) {
        printf("Namunali\n");
    } else if (ortacha >= 3.8 && ortacha < 4.5) {
        printf("Qoniqarli\n");
    } else {
        printf("Qoniqarsiz\n");
    }
    
    return 0;
}