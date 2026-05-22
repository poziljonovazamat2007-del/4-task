#include <stdio.h>

int main() {
    int n;
    printf("N ni kiriting: ");
    scanf("%d", &n);
    int xona = 0;
    int sum = n;
    if (sum == 0) {
        xona = 1;
    } else {
        while (sum > 0) {
            xona++;
            sum /= 10;
        }
    }
    if (n % 2 == 0) {
        printf("%d xona, Juft son\n", xona);
    } else {
        printf("%d xona, Toq son\n", xona);
    }
    
    return 0;
}