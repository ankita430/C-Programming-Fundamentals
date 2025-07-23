#include <stdio.h>

int main()
{
    float a;
    double b;
    long double c;

    printf("float: ");
    scanf("%f", &a);

    printf("double: ");
    scanf("%lf", &b);

    printf("long double: ");
    scanf(" %Lf", &c); 

    printf("float = %f\n", a);
    printf("double = %lf\n", b);
    printf("long double = %Lf\n", c);

    return 0;
}


