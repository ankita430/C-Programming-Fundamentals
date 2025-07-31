#include <stdio.h>

int main()
{
  int i, n;
  printf("Enter starting number: ");
  scanf("%d", &n);
  printf("Natural numbers from %d: \n", n);
  for(i = n; i>=1; i--)
    {
      printf("%d\n", i);
    }
  return 0;
}    
