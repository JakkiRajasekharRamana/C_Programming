/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num;
    printf("Enter Any Number :");
    scanf("%d",&num);
    
    int product=1;
    int sum=0;
    
    while(num!=0)
    {
        int mod=num%10;
        product=product*mod;
        num=num/10;
        sum=sum+mod;
        
        
    }
    printf("Sum Of All Digits In This Number=%d\n",sum);
    printf("Product Of All Digits In This Number=%d",product);
}

