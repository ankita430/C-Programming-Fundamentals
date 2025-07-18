int main()
{
    int num1, num2;            
    int mod;   
    
    printf("Enter any two numbers: ");
    scanf("%d%d", &num1, &num2);

    mod  = num1 % num2;

    printf("MODULUS = %d\n", mod);

    return 0;
}