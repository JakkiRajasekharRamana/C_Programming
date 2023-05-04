#include <stdio.h>

int main()
{
    int a;
    printf("Enter any 5 digit value:\n");
    scanf("%d",&a);
    while(a>0)
    {
        printf("%d",a%10);
        a=a/10;
    }
}
