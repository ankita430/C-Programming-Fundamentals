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
----*----

#include <stdio.h>
#include <math.h>
int main() {
    // Write C code here
    int i;
    printf("enter value of i: ");
    scanf("%d", &i);
    int res;
    
    res = sqrt(i);
    
    printf("%d", res);
    
    
    return 0;
}

