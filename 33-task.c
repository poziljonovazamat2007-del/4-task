//Shart: N sekunddan soat va sekund topilsin.

#include <stdio.h>

int main() {
    int n, soat, sekund;
    printf("Sekundni kiriting: ");
    scanf("%d", &n);
    soat= n / 3600;
    sekund= n % 3600;
    printf("%d soat %d sekund\n", soat, sekund );
    
    
    return 0;
}
