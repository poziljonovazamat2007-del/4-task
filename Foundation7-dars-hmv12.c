//Qiyin 2: Kamida bittasi toq bo‘lsa qiymat almashtirish

#include <stdio.h>

int main() {
    int a, b;
    printf("2 ta sonni kiriting: ");
    scanf("%d %d", &a, &b);
    
    if (a % 2 != 0 || b % 2 != 0) {
        int temp = a;
        a = b;
        b = temp;
    }
    
    printf("%d %d\n", a, b);
    
    return 0;
}