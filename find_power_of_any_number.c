#include <stdio.h>
int main()
{
    int num, power;
    long long int result = 1;
    printf("Enter the base: ");
    scanf("%d", &num);
    printf("Enter the exponent: ");
    scanf("%d", &power);
    for (int i = 1; i <= power; i++)
    {
        result = result * num;
    }
    printf("%d^%d = %lld", num, power, result);
    return 0;
}
