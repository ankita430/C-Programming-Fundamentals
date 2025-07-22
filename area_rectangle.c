#include <stdio.h>

int main() 
{
    float l, w, a;
    printf("l, w: ");
    scanf("%f%f", &l, &w);
    
    a = l * w;
    printf("a = %.2f\n", a);
    
    return 0;
}

