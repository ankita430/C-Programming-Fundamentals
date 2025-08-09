#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter numbers: ");
    scanf("%d %d", &a, &b);
    if(a > b)
    {
        printf("%d is maximum", a);
    }
        if(b > a)
        {
           printf("%d is maximum", b); 
        }
        if(a == b)
        {
            printf("maximum equal to minimum");
        }
        return 0;
}
----*----
#include <stdio.h>
int main()
{
    int a, b, c, max;
    printf("Enter numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a > b)
    {
        if(a > c)
        {
            max = a;
        }
        else
        {
            max = c;
        }
    }
    else
    {
        if(b > c)
        {
            max = b;
        }
        else
        {
            max = c;
        }
    }
    printf("Maximum = %d", max);
    return 0;
}


    
