#include <stdio.h>
int main()
int num = 4;
int fact = 1;
for(int i = num; i >= 1; i--)
{
  fact = fact * i;
}
printf("factor of num: %d", fact);
return 0;
}
