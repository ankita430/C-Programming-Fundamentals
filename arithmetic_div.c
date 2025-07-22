#include <stdio.h>

int main()
{
    int a, b;
    float quot;
    
    printf("a, b: ");
    scanf("%d%d", &a, &b);
    
    quot = (float)a / b;
    printf("quot %.2f\n", quot);
    
    return 0;
}
