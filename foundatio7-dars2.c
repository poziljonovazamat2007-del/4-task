#include <stdio.h>

int main() {
    float suv;
    printf("Suv miqdorini kiriting (litr): ");
    scanf("%f", &suv);
    
    if (suv <= 2) {
        printf("Ko'proq suv iching\n");
    } 
    else {
        printf("Suv yetarli\n");
    }
    
    return 0;
}