#include <stdio.h>
int main()  
{
    int num;
    int fact = 1;
    printf("Enter number: ");
    scanf("%d", &num);
    for(int i = num; i >= 1; i--)
    {
        fact = fact * i;
    }
        printf("Factorial of %d = %d", num, fact);
        return 0;
}


   
