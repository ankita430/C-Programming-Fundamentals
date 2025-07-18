#include <stdio.h>

int main()
{
    float floatVal;
    double doubleVal;
    long double longDoubleVal;

    printf("Enter a float: ");
    scanf("%f", &floatVal);

    printf("Enter a double: ");
    scanf("%lf", &doubleVal);

    printf("Enter a long double: ");
    scanf("%Lf", &longDoubleVal);

     printf("You entered float: %f\n", floatVal);
    printf("You entered double: %lf\n", doubleVal);
    printf("You entered long double: %Lf\n", longDoubleVal);

    return 0;
}
