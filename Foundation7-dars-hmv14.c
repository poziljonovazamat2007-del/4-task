#include <stdio.h>

int main() {
    int kunlar;
    printf("Kunlar sonini kiriting: ");
    scanf("%d", &kunlar);
    int qoldiq = kunlar % 7;
    if (qoldiq == 0) printf("Dushanba\n");
    else if (qoldiq == 1) 
    printf("Seshanba\n");
    else if (qoldiq == 2)
    printf("Chorshanba\n");
    else if (qoldiq == 3)
     printf("Payshanba\n");
    else if (qoldiq == 4) 
    printf("Juma\n");
    else if (qoldiq == 5)
     printf("Shanba\n");
    else if (qoldiq == 6) 
    printf("Yakshanba\n");
    
    return 0;
}