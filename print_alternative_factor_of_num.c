#include <stdio.h>
int main()
{
    int n;
    int count = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
       if(n % i == 0) 
     {
       count++;
       if(count%2 == 0)
       continue;
       printf("%d ", i);
     }
    } 
       return 0;
}
-----*-----
#include <stdio.h>
int main()
{
    int n;
    int count = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
       if(n % i == 0) 
     {
       count++;
       if(count%2 != 0)
       continue;
       printf("%d ", i);
     }
    } 
       return 0;
}
