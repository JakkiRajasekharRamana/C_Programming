
//Q)WAP which finds all factors for any given number
#include <stdio.h>

int main()
{
    int num,a,b;
    int i;
    
    printf("Enter Any Number :");
    scanf("%d",&num);
    
    printf("The Factors Of The Number Are :");
    
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            printf("%d,",i);
        }    
    }
 

    
    
}

