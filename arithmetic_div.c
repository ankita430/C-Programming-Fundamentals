int main()
{
    int num1, num2;            
    float div;               

    printf("Enter any two numbers: ");
    scanf("%d%d", &num1, &num2);

    div  = (float)num1 / num2;   // Typecast to float for decimal division
    
    printf("QUOTIENT = %.2f\n", div);
   
    return 0;
}