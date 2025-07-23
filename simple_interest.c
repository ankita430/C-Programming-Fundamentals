#include <stdio.h>

int main()
{
    float p, t, r, si;

    printf("principal amount: ");
    scanf("%f", &p);

    printf("time: ");
    scanf("%f", &t);

    printf("rate of interest: ");
    scanf("%f", &r);

    si = (p * t * r) / 100;

    printf("Simple Interest = %.2f\n", si);

    return 0;
}
