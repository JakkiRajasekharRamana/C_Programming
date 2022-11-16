/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    //string text= get_string("Text ");
    
    char text[100];
    
    printf("Sentence:");
    scanf("%[^\n]s",&text);
    
    
    int letters=0;
    for(int i=0;i < strlen(text);i++)
    {
        if(isalpha(text[i]))
        {
            letters++;
        }
    }
    printf("%d",letters);
}

