
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
    for(int i=0;i<5;i++)48
    {
        printf("%d, ",a[i]);
    }
    printf("\b\b}");
    
    int max=a[0];
    int min=a[0];
    for(int i=1;i<5;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
        if(min>a[i])
        {
            min=a[i];
        }
    }
    printf("\nMax=%d\nMin=%d",max,min);
}


