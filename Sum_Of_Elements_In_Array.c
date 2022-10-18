
#include <stdio.h>

int main()
{
    int array[7] = {3, 5, 9, 12, 14, 16, 21};
    int sum=0;
    /*
    int length_array=sizeof(array);
    printf("%d",length_array);*/
    
    for(int i=0;i<7;i++)
    {
        
        sum=sum+array[i];
    }
    
    printf("%d",sum);
}

