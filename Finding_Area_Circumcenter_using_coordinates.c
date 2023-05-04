
#include <stdio.h>

int main()
{
    float a,b,c,d,e,f,g,h,i,s,l_ab,l_bc,l_ac,x1,x2,x3,y1,y2,y3,s,area;
    printf("Enter coordinates for x1,y1:");
    scanf("%d%d",&x1,&y1);
    printf("Enter coordinates for x2,y2:");
    scanf("%d%d",&x2,&y2);
    printf("Enter coordinates for x3,y3:");
    scanf("%d%d",&x3,&y3);
    a=pow(x1-x2,2);
    b=pow(y1-y2,2);
    c=pow(x1-x3,2);
    d=pow(y1-y3,2);
    e=pow(x2-x3,2);
    f=pow(y2-y3,2);
    l_ab=pow(a+b,0.5);
    l_bc=pow(e+f,0.5);
    l_ac=pow(c+d,0.5);
    s=(l_ab+l_bc+l_ac)/2;
    area=pow(s*(s-l_ab)*(s-l_bc)*(s-l_ac),0.5);
    printf("Area=%f",area);
    printf("Circumference=%f",s*2);
    return 0;
}
