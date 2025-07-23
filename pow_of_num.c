#include <stdio.h>
#include<math.h>

int main()
{
    double a, b, result;
    
    printf("a b: ");
    scanf("%lf %lf", &a, &b);
    
    result = pow(a, b);
    printf("%.2lf ^ %.2lf = %.2lf\n", a, b, result);
    
    return 0;
}




