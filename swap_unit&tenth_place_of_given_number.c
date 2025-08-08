#include <stdio.h>
int main()
{
    int n   =  9561;
    int u   =  n%10;
    int t   =  (n/10)%10;
    int h   =  (n/100)%10;
    int th  =  (n/1000)%10;
    int temp = t;
    t = u;
    u = temp;
    int res = th * 1000 + h * 100 + t * 10 + u;
    printf("%d ", res);
    return 0;
}
