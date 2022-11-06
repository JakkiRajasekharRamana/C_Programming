
//Q)Give An Example For Reccution Funtion

#include <stdio.h>

int main()
{
    int num,a;
    
    printf("Enter Any Number:");
    scanf("%d",&num);
}

int funtion(int num)
{
    if(num==1)
    {
       return 1;
    }
    else
    {
        return 1+funtion(num-1);
    }
    
}

