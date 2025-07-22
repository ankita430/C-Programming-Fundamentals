#include <stdio.h>

int main()
{
    int a, b;
    int rem;
    
    printf("a, b: ");
    scanf("%d%d", &a, &b);
    
    rem = a % b;
    printf("rem = %d\n", rem);
    
    return 0;
}

