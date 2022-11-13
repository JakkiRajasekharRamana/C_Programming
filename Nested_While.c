/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int count=0;
    int no_of_lines;
    
    printf("Enter no of lines :");
    scanf("%d",&no_of_lines);
    
    
    while(count<=no_of_lines)
    {   
        int inner_count=1;
        while(inner_count<=count)
        {
            printf("*");
            inner_count++;
        }
        printf("\n");
        count++;
        
    }
}

