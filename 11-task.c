#include <stdio.h>

int main()
{
    int kun, sut;

    printf("Sut miqdorini kiriting (l): ");
    scanf("%d", &sut);
    printf("Kunlar sonini kiriting: ");
    scanf("%d", &kun);
    printf("%d kunga yetadi", sut/kun );
    
    return 0;
}
