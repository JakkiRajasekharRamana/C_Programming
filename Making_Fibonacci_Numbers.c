/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num,i;
    int sum=0;
    
    printf("Enter Any Number :");
    scanf("%d",&num);
    
    for(i=0;i<=num;i++)
    {
        sum=sum+i;
        
    }
    
    printf("Sum=%d",sum);
}


