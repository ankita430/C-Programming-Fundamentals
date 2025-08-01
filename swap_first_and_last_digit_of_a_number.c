#include <stdio.h>
int main()
{
    int num, n, firstDigit, lastDigit, swappedNum;
    int divisor = 1;
    printf("Enter any number: ");
    scanf("%d", &num);
    n = num;
    lastDigit = num % 10;
    while (n >= 10)
    {
        n /= 10;
        divisor *= 10;
    }
        firstDigit = n;
        int middlePart = num % divisor;
        middlePart = middlePart / 10;
        swappedNum = lastDigit * divisor + middlePart * 10 + firstDigit;
        printf("Original number = %d\n", num);
        printf("Number after swapping first and last digit = %d\n", swappedNum);
        return 0;
}
