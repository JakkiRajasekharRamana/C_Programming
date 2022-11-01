//Q))Finding LCM btw 2 Numbers

#include <stdio.h>

int main()
{
    int num1,num2,i,HCF;
    int LCM;
    
    printf("Enter Your First Number:");
    scanf("%d",&num1);
    
    printf("Enter Your Secound Number:");
    scanf("%d",&num2);
    
    if(num1>num2)
    {
        for(i=1;i<=num1;i++)
        {
            if(num1%i==0 && num2%i==0)
            {
                HCF=i;
            }
        }
    }
    else
    {
        for(i=1;i<=num2;i++)
        {
            if(num1%i==0 && num2%i==0)
            {
                HCF=i;
            }
        }
    }
    LCM=(num1*num2)/HCF;
    printf("LCM Of Two Numbers=%d",LCM);
}

