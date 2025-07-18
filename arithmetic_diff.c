#include <stdio.h>

int main(void)
{
    int num1, num2;
    int sub;
    
  printf("Enter any two numbers: ");
    scanf("%d%d", &num1, &num2);

    sub  = num1 - num2;
    printf("DIFFERENCE = %d\n", sub);

    return 0;
}


