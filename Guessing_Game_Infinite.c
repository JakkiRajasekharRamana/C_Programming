/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int secret_number = 7;
    int a=0;
    
   
    /*
    printf("Enter Your Number:");
    scanf("%d", &a);
    
    
    printf("guess=%d",a);
    printf("\n");
    */
    
    while(a!=secret_number)
    {

        printf("Enter Your Number:");
        scanf("%d", &a);
    }

    printf("You Guessed Correct");
    
}


