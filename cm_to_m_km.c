#include <stdio.h>
int main()
{
    float cm, m, km;
    printf("cm: ");
    scanf("%f", &cm);
    printf("m = %.2f m\n km = %.2f km\n", cm/100, cm/100000);
    
    return 0;
}
