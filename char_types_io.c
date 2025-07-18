#include <stdio.h>

int main()
{
    char charVal;
    unsigned char uCharVal;

    printf("Enter a character: ");
    charVal = getchar();
    getchar();  

    printf("Enter another character: ");
    uCharVal = getchar();
    getchar();  

    printf("\nYou entered character: '%c'\n", charVal);
    printf("You entered unsigned character: '%c'\n\n", uCharVal);
 
    return 0;
}