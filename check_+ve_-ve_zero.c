#include <stdio.h>
int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    if(num > 0)
    {
        printf("Positive");
    }
    if(num < 0)
    {
        printf("Negative");
    }
    if(num == 0)
    {
        printf("Zero");
    }
    return 0;
}
----*----
#include <stdio.h>
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    if(n > 0)
    {
        printf("Positive");
    }
    else if(n < 0)
    {
        printf("Negative");
    }
    else
    {
        printf("Zero");
    }
    return 0;
}
