/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <conio.h>
int main()
{
    int num;
    int rev_num=0;
    
    printf("Enter a number: ");
    scanf("%d",&num);
    
    while(num!=0)
    {
        
        int mod=num%10;
        rev_num=rev_num*10+mod;
        num=num/10;
    }
    
    printf("The rev number is=%d",rev_num);

}

