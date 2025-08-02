#include <stdio.h>
int main()
{
    int n[9] = {1,2,3,4,5,6,7,8,9};
    int res = 0;
    for (int i = 0; i < 9; i++)
    {
        res = res * 10 + n[i];
    }
        printf("Resultant number is %d\n", res);
        return 0;
}
