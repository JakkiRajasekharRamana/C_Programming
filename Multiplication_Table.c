/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int table_number;
    printf("Enter Table number :");
    scanf("%d",&table_number);
    
    
    for(int i=1;i<11;i++)
    {
        int product=table_number*i;
        
        printf("%d x %d = %d\n",table_number,i,product);
    }
}

