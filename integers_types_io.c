#include <stdio.h>

int main()
{
    short shortVal;
    unsigned short uShortVal;
    int intVal;
    unsigned int uIntVal;
    long longVal;
    unsigned long uLongVal;
    long long longLongVal;
    unsigned long long uLongLongVal;

     printf("Enter a signed short: ");
    scanf("%hi", &shortVal);

    printf("Enter an unsigned short: ");
    scanf("%hu", &uShortVal);

    printf("Enter a signed integer: ");
    scanf("%d", &intVal);

    printf("Enter an unsigned integer: ");
    scanf("%u", &uIntVal);

    printf("Enter a signed long: ");
    scanf("%ld", &longVal);

    printf("Enter an unsigned long: ");
    scanf("%lu", &uLongVal);

    printf("Enter a signed long long: ");
    scanf("%lld", &longLongVal);

    printf("Enter an unsigned long long: ");
    scanf("%llu", &uLongLongVal);

    printf("You entered signed short: %hi\n", shortVal);
    printf("You entered unsigned short: %hu\n\n", uShortVal);

    printf("You entered signed int: %d\n", intVal);
    printf("You entered unsigned int: %u\n\n", uIntVal);

    printf("You entered signed long: %ld\n", longVal);
    printf("You entered unsigned long: %lu\n\n", uLongVal);

    printf("You entered signed long long: %lld\n", longLongVal);
    printf("You entered unsigned long long: %llu\n\n", uLongLongVal);

    return 0;
}
