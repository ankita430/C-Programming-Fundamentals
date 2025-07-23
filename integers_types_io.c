#include <stdio.h>

int main()
{
    short a;                    
    unsigned short b;           

    int c;                      
    unsigned int d;             

    long e;                     
    unsigned long f;            
    long long g;                
    unsigned long long h;       

    
    printf("a b c d e f g h: ");
    scanf("%hi %hu %d %u %ld %lu %lld %llu", &a, &b, &c, &d, &e, &f, &g, &h);

    
    printf("short = %hi\n", a);
    printf("unsigned short = %hu\n\n", b);

    printf("int = %d\n", c);
    printf("unsigned int = %u\n\n", d);

    printf("long = %ld\n", e);
    printf("unsigned long = %lu\n\n", f);

    printf("long long = %lld\n", g);
    printf("unsigned long long = %llu\n", h);

    return 0;
}



   

    
   
