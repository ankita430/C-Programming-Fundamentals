#include <stdio.h>
int main()
{
    float c, f;
    printf("c: ");
    scanf("%f", &c);
    
    printf("%.2f c = %.2f f", c, f, f = (c * 9 / 5) + 32);
    
    return 0;
}
