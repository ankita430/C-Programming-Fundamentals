#include <stdio.h>
int main()
{
   int year = 2000;
   if(year%400 == 0)
   printf("Leap year");
   else if(year%100 != 0)
   printf("Not a Leap year");
   else if(year%4 == 0)
   printf("Leap year");
   else
   printf("Not a Leap year");
return 0;
}
