#include <stdio.h>

int LCM(int a,int b)
{
	int c;
	if(a>b)
	{
		c=a%b;
		if(c==0)
			return a;
	}
	else
	{
		c=b%a;
		if(c==0)
			return b;
	}
	return (a*b/c);
}

int main()
{
	int a,b;
	printf("Enter 2 numbers:");
	scanf("%d%d",&a,&b);
	printf("%d",LCM(a,b));
}
