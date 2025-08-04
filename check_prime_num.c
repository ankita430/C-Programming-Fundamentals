#include <stdio.h>
int main()
{
    int num = 11;
    int fact = 0;
    for(int i = 1; i <= num; i++)
    {
        if(num%i == 0)
        fact++;
    }
    if (fact == 2)
    printf("Given %d number is a prime number", num);
    else
    printf("Not a prime number");
return 0;
}

------*------
#include <stdio.h>
int main()
{
    int num, isPrime, i;
    printf("Enter any number: ");
    scanf("%d", &num);
    isPrime = 1;
    for(i = 2; i<num; i++)
    {
        if(num%i == 0)
        {
            isPrime = 0;
            break;
        }
    }
        if(isPrime == 1)
        {
            printf("Number is prime number.");
        }
        else
        {
            printf("Number is composite number.");
        }
        return 0;
}


