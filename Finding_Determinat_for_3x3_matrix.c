//Q)Write Determant For 3 x 3 Matrix 

#include <stdio.h>

int main()
{
    int a1,a2,b1,b2,a3,b3,c3,c1,c2;
    
    printf("Enter Values For a1,b1,c1,a2,b2,c2,a3,b3,c3:");
    scanf("%d%d%d%d%d%d%d%d%d",&a1,&b1,&c1,&a2,&b2,&c2,&a3,&b3,&c3);
    
    int det;
    det=a1*(b2*c3-c2*b3)-b1*(a2*c3-a3*b2)+c1*(a2*b3-a3*b2);
    
    printf("|%d %d %d|\n",a1,b1,c1);
    printf("|%d %d %d|\n",a2,b2,c2);
    printf("|%d %d %d|",a3,b3,c3);
    printf("=%d",det);
}
