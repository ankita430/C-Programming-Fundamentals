#include <stdio.h>
int main()
{
  int a = 1, b = 6;
  int i, count = 0;
  for (i = a; i <= b; i++)
{
  if (b % i == 0)
  {
    printf("%d\n", i);
    count++
 }
}
printf("No. of factors are: %d", count):
  return 0;
}
