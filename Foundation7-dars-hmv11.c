#include <stdio.h>

int main() {
    int a, b, c;
    printf("3 ta sonni kiriting: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a <= b && a <= c) 
    printf("%d %d\n", b, c);
    else if (b <= a && b <= c) 
    printf("%d %d\n", a, c);
    else 
    printf("%d %d\n", a, b);
    
    return 0;
}