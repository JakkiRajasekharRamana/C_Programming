#include <stdio.h>
int main()
{
	int row,a=1,i,j;
	printf("Enter no of rows");
	scanf("%d",&row);
	for(i=0;i<row;i++)
	{
		a=1;
		for(j=row-i;j>i;j--)
			printf(" ");
		for(j=0;j<=i;j++)
		{
			printf("%d",a);
			a=a*(i-j)/(j+1);
		}
		printf("\n");

	}
}
