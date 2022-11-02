//Q)Write Determant For 2 x 2 Matrix 

#include <stdio.h>

int main()
{
    int a1,a2,b1,b2;
    
    printf("Enter Values For a1,b1,a2,b2:");
    scanf("%d%d%d%d",&a1,&b1,&a2,&b2);
    
    int det;
    det=a1*b2-a2*b1;
    
    printf("|%d %d|\n",a1,b1);
    printf("|%d %d|",a2,b2);
    printf("=%d",det);
}

