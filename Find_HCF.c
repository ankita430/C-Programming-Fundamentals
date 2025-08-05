#include <stdio.h>
int main()
{
int num1, num2;
int HCF = 1;
printf("Enter two number: ");
scanf("%d%d", &num1, &num2);
for(int i = 1; i <= num1 && i <= num2; i++)
{
    if(num1 % i == 0 && num2 % i == 0)
    {
        HCF = i;
    }
}
    printf("HCF of %d and %d = %d", num1, num2, HCF);
    return 0;
}
-----*-----
#include <stdio.h>
int main()
{
int num1, num2;
printf("Enter two numbers: ");
scanf("%d%d", &num1, &num2);
while (num1 != num2)
{
    if (num1 > num2)
        num1 = num1 - num2;
    else
        num2 = num2 - num1;
}

printf("HCF = %d", num1);
return 0;
}

