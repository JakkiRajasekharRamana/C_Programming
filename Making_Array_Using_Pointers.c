//Q)Make_An_Array_using_Pointers

#include <stdio.h>

int main()
{
    int a[100],d,i;
    int *p;
    
    printf("Enter dimention:");
    scanf("%d",&d);
    printf("\nEnter %d values:",d);
    for(int i=0;i<d;i++);
    {
        scanf("%d",&a[i]);
    }
    p=a;
    printf("a={");
    for(int i=0;i<d;i++)
    {
        printf("%d\n",*p);
        p++;
    }
    

}

