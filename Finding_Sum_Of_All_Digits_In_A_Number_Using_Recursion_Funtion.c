//Q))Find Sum Of All Digits In A Number Using Recurtion

#include <stdio.h>

int fun(int num)
{
    if(num==0)
    {
        return 0;
    }
    else
    {
        return num%10+fun(num/10);
    }
    
}

int main()
{
    int num,a;
    printf("Enter Any Number:");
    scanf("%d",&num);
    printf("%d",fun(num));
}
