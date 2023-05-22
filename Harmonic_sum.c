#include <stdio.h>

int main()
{
	int a=24,b=28,r;
	while(2)
	{
	
		r=b%a;
		if(r==0)
		{
			printf("HCF=%d\n",a);
			break;
		}
		else
		{
			b=a;
			a=r;
		}
		
		
	}
	
}
