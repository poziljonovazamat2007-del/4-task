//Shart: N sekunddan soat, minut va sekund topilsin.

#include <stdio.h>

int main() {
    int n, soat, minut, sekund;
    printf("Sekundni kiriting: ");
    scanf("%d", &n);
    soat= n / 3600;
    minut = (n % 3600) / 60;
    sekund= n % 60;
    printf("%d soat %d minut %d sekund\n", soat, minut, sekund );
    
    
    return 0;
}
