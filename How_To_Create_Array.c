//Q)Can You Create A Array?
#include <stdio.h>

int main()
{
    int a[5];
    printf("Enter any 5 numbers :");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("a={");
    for(int i=0;i<5;i++)
    {
        printf("%d, ",a[i]);
    }
    printf("\b\b}");
    
}

