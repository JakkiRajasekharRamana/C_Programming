
#include <stdio.h>

int main()
{
    double num1;
    double num2;
    char op;
    
    printf("Enter Your first number :");
    scanf("%lf",&num1);
    
    printf("Enter Your Operator :");
    scanf(" %c",&op);
    
    printf("Enter Your secound number :");
    scanf("%lf",&num2);
    
    
    if (op == '+')
    {   
        printf("%f",num1+num2);
    }
    else if (op == '-')
    {
        printf("%f",num1-num2);
    }
    else if(op == '*')
    {
        printf("%f",num1 * num2);
    }
    else if(op == '/')
    {
        printf("%f",num1 / num2);
    }
    else 
    {
        printf("invalid operation");
    }

}


//check if correct


