/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

/*If Doubt see https://www.youtube.com/watch?v=8i15NgiLb_A */

int main()
{
    int rows,i,j,k;
    
    printf("Enter No of rows :");
    scanf("%d",&rows);
    
    for( i=1;i<=rows;i++)
    {
        for(j=rows;j>i;j--)
        {
          printf(" ");  
        }
        for(k=1;k<=i;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    

}

