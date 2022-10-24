/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num;
    int a=1;
    printf("Enter Any Number: ");
    scanf("%d",&num);

    for(int i=1;i<=num;i++)
    
    {
        a=a*i;
    }
    
    printf("%d!=%d",num,a);
}
