#include <stdio.h>
#include <math.h>
int main()
{
   int p, r, t;
   double amount;
   printf("Enter principle, rate and time: ");
   scanf("%d %d %d", &p, &r, &t);
   amount = p * pow(1 + r/100.0, t);
   printf("Compound Amount = %.2lf\n", amount);
     return 0;
}

-------*---------
#include <stdio.h>
int main()
{
    int p, r, t;
    float amount = 1.f;
    printf("Enter principle, rate and time: ");
    scanf("%d %d %d", &p, &r, &t);
    float rate = 1 + (r / 100.0f);
    for (int i = 0; i < t; i++) {
        amount *= rate;
    }
    amount = p * amount;
    printf("compound amount = %.2f\n", amount);
    return 0;
}

