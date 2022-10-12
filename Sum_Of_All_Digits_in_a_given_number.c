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
    int a,b,c,d,e,f,g;
    printf("Enter Your number :");
    scanf("%d",&a);
   
    b=a%10;
   
    c=a/10;
    d=c%10;
   
    e=a/100;
    f=e%10;
    
    g=a/1000;
    
    int sum=b+d+f+g;
    printf("Sum of all digits in the number=%d",sum);
    
    
    
    
    /*-Rajasekhar Ramana*/
    
    
    
    
}

