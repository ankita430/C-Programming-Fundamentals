#include <stdio.h>
int main()
{
int a = 11;
int b = 100;
    for (int i = a; i <= b; i++) 
    {
        int fact = 0;
        for(int j = 1; j <= i; j++)
        {
            if(i%j==0)
            fact++;
        }
            if (fact == 2)
            printf("%d ", i);
    }
    return 0;
}
