#include <stdio.h>
int main(void)
{
    char grade;
    printf("Enter student grade: ");
    grade = getchar();
    printf("You entered: ");
    putchar(grade);
    printf("\n");

    return 0;
}
