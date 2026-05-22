
#include <stdio.h>

int main() {
    char amal;
    printf("Amalni kiriting (+, *, /): ");
    scanf(" %c", &amal);
    
    if (amal == '+')
     printf("Qo'shish\n");
    else if (amal == '*') 
    printf("Ko'paytirish\n");
    else if (amal  == '/')
     printf("Bo'lish\n");
    else printf("Noto'g'ri amal\n");
    
    return 0;
}