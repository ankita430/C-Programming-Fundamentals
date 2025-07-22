#include <stdio.h>
int main()
{
    char ch1;
    unsigned char ch2;
    
    printf("ch1, ch2: ");
    scanf(" %c %c", &ch1, &ch2);
    
    printf("char: '%c'\n'%c'\n", ch1, ch2);
    
    return 0;
}
