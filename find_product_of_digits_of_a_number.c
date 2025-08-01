#include <stdio.h>
int main()
{
    int num, temp, digit, product;
    printf("Enter any number to calculate product of digits: ");
    scanf("%d", &num);
    if(num == 0)
    {
        product = 0;
    }
        else
        {
            product = 1;
            temp = num;
            while (temp != 0)
            {
                digit = temp % 10;
                product = product * digit;
                temp = temp / 10;
            }
        }
          printf("Product of digits = %d\n", product);
          return 0;
}
