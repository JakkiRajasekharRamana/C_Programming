
#include <stdio.h>

int main()
{
    int height;
    
    printf("Enter Height:");
    scanf("%d",&height);
    
    if(height>1 && height<8)
    {
        for(int i=1;i<=height;i++)
        {
            for(int j=i;j<height;j++)
            {
                printf(" ");
            }
            for(int k=1;k<=i;k++)
            {
                printf("#");
            }
        printf("\n");
        }
    }
    
    else
    {
        printf("Re enter the height from 1 to 8");
        return 0;
    }
}

