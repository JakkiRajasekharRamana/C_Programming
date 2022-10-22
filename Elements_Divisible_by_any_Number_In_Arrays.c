/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[]={2, 9, 6, 8, 5, 12, 15, 16};
    
    int num;
    
    printf("Enter Any Number :");
    scanf("%d",&num);
    
    for(int i=0;i<8;i++)
    {
        if(a[i]%num==0)
        {
            printf("The Numbers Divisle By %d=%d\n",num, a[i]);
            
        }
        
    }


}


