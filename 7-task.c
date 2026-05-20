#include <stdio.h>

int main()
{
    float a, b;

    printf("Pulni kiriting ($): ");
    scanf("%f", &a);
    printf("Do'stlaringiz sonini kiriting: ");
    scanf("%f", &b);
    printf("%0.0f dollar", a/b );
   
}
