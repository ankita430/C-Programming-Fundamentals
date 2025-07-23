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
-----*-----

#include <stdio.h>
int main()
{
    int num = 2;
    int power = 3;
    int result = 1;
    
    for (int i = 1; i <= power; i++)
    {
        result = result * num;
    }
    
    printf("%d", result);
    
    return 0;
}




