#include <stdio.h>
int main() 
{
    int n = 1234506;
    while (n>0)
    {
        int rem = n%10;
        n = n/10;
        if(rem == 0 || rem == 5)
        {
            continue;
        }
            printf("%d", rem);
    }
            return 0;
}
