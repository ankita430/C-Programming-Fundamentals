#include <stdio.h>

int main(void)
{
    int num1 = 0, num2 = 0;
    printf("Enter two integers: ");
    if (scanf("%d %d", &num1, &num2) != 2) {
        printf("Invalid input. Please enter two integers.\n");
        return 1;
    }
    int sum = num1 + num2;
    printf("Sum = %d\n", sum);

    return 0;
}

