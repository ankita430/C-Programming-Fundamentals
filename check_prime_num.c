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

