/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int sum=0;
    int num,mod;
    
    printf("Enter any number: ");
    scanf("%d",&num);
  
    int count=0;
    while(num!=0)
    {
        mod=num%10;
        sum=sum+mod;
        num=num/10;
        count++;
    }
  
    printf("Sum Of all digits in the given number=%d",sum);
}

