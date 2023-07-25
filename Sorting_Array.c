#include <stdio.h>

int main()
{
	int a[5]={7,9,1,69,2};
	//{1,2,7,9,69}
	int x;
	int l=sizeof(a)/sizeof(a[1]);
    for(int i=0;i<l-1;i++)
    {
        for(int j=0;j<l-1;j++)
        {
            if(a[j]>a[j+1])
            {
                x= a[j];
                a[j] = a[j + 1];
                a[j + 1] =x;
            }
        }
    }
    int y=a[l-2];
    printf("%d",y);
    return 0;
}
