//Find Simple Intrest 

#include <stdio.h>

int main()
{
    int p,r,t;
    
    printf("Enter Value For Principal:");
    scanf("%d",&p);
    printf("Enter Value For Rate:");
    scanf("%d",&r);
    printf("Enter Value For Time:");
    scanf("%d",&t);
    
    int x=p*r*t/100;
    printf("Simple Intrest=%d",x);
}
