//Q)Check whether the number is a perfect number or not?
#include <stdio.h>

int main()
{
    int num,sum=0;
    printf("Enter any number :");
    scanf("%d",&num);
    
    for(int i=1;i<num;i++)
    {
        if(num%i==0);
        {
            sum=sum+i;
        }
    }
    
    if(sum==num)
    {
        printf("The Given Number Is A Perfect Number");
    }
    else
    {
        printf("The given number is not a perfect number");
    }
}


