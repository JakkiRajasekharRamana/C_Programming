#include <stdio.h>

int main()
{
	int a[7]={9,3,5,9,1,8,7};
	int l=(sizeof(a)/sizeof(a[0]));
	int x,y,c=0;
	for(int i=0;i<l-1;i++)
	{
		x=a[i];
		for(int j=i+1;j<l;j++)
		{
			if(a[j]==x);
			{
				c=69;
				y=j;
				//printf("%d",j);
			}
		}
		if(c==69)
		{
			printf("Yes\n");
			printf("%d %d",i,y);
			c=1;
			break;
		}
	}
	if(c==0)
		printf("No");
	return 0;
}
