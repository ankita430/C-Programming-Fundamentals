#include <stdio.h>
#include <math.h>

int main()
{
    double a, r; 

    printf("a: ");
    scanf("%lf", &a);

    r = sqrt(a);  

    printf("sqrt(%.2lf) = %.2lf\n", a, r);

    return 0;
}

