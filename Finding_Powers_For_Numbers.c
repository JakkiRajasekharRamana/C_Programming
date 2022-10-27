//  Q)How To Write Powers?
//A)

#include <stdio.h>

int main()
{
    int num1,num2;
    int num3=1;
    
    printf("Enter Number 1 :");
    scanf("%d",&num1);
    
    
    printf("Enter Your Second Number 2 :");
    scanf("%d",&num2);
    
    for(int i=1;i<=num2;i++)
    {
        num3=num3*num1;
    }
    
    printf("%d^%d=%d",num1,num2,num3);

}

