#include <stdio.h>
int main()
{
    int num1, num2;
    int HCF = 1, LCM;
    printf("Enter two numbers: ");
    scanf("%d%d", &num1, &num2);
    for(int i = 1; i <= num1 && i <= num2; i++)
    {
        if(num1 % i == 0 && num2 % i == 0)
        {
            HCF = i;
        }
    }
            LCM = (num1 * num2) / HCF;
            printf("LCM of %d and %d = %d", num1, num2, LCM);
            return 0;
}

----*----
  #include <stdio.h>
int main()
{
    int num1, num2, a, b, HCF, LCM;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    num1 = a;
    num2 = b;
    while (num1 != num2)
    {
        if (num1 > num2)
        num1 = num1 - num2;
        else
        num2 = num2 - num1;
    }
        HCF = num1;
        LCM = (a * b) / HCF;
        printf("LCM of %d and %d = %d", a, b, LCM);
        return 0;
}
