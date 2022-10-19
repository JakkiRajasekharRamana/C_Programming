
#include <stdio.h>

int main()
{
    int a[]={15, 19, 16, 23, 28, 46, 29};

    
    for(int i=0;i<7;i++)
    {
        if(a[i]%2==0)
        {
            printf("Even Number =%d\n",a[i]);
        }
        else 
        {
            printf("Odd Number =%d\n",a[i]);
        }
    }    

 
  
}
