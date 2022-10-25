/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num=-1;
    int num2;
    printf("Enter Your Number:");
    scanf("%d",&num2);
    
    while(num!=num2)
    {
        /*num=num+2;
        printf("%d,",num);
        */
        num=num+1;
        if(num%2!=0)
        {
           printf("%d,",num);
        }
    }
}

