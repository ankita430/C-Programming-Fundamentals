#include <stdio.h>
int main()
{
    int y, w, d;
    printf("d: ");
    scanf("%d", &d);
    y = d / 365;                  
    w = (d % 365) / 7;           
    d = d - (y * 365 + w * 7);    

    printf("y = %d\n w = %d\n d = %d\n", y, w, d);
    
    return 0;
}








