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

    
