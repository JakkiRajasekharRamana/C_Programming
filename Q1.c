/*
Akshay and Rohith are playing a game. The game is such that Akshay has to find out the 
number in a series of 5 numbers which are given by Rohith (all the numbers are greater 
than 0). Now, out of the 5 numbers only one number is not a duplicate of any other number, 
i.e every other number except one number has a duplicate. Help Akshay write a program 
that finds the number not having a duplicate and displays the same as the output. [Please 
understand that you are not supposed to use == operator or loops or an array(s) or any built 
in function other than printf and scanf)]
*/



#include <stdio.h>

int main()
{
	int a,b,c,d,e;
	printf("Enter 5 numbers:");
	scanf("%d%d",&a,&b);
	scanf("%d%d%d",&c,&d,&e);
	if(a&b)
	{
		if(c&d)
		{
			printf("\b%d",e);
		}
		if(c&e)
		{
			printf("\b%d",d);
		}
		if(d&e)
		{
			printf("\b%d",c);
		}
	}
	
	else if(b&c)
	{
		if(a&d)
		{
			printf("\b%d",e);
		}
		if(a&e)
		{
			printf("\b%d",d);
		}
		if(d&e)
		{
			printf("\b%d",a);
		}
	}
	else if(c&d)
	{
		if(a&b)
		{
			printf("\b%d",e);
		}
		if(a&e)
		{
			printf("\b%d",b);
		}
		if(b&e)
		{
			printf("\b%d",a);
		}
	}
	else if(d&e)
	{
		if(a&b)
		{
			printf("\b%d",a);
		}
		if(b&c)
		{
			printf("\b%d",a);
		}
		if(a&c)
		{
			printf("\b%d",b);
		}
	}
	else if(a&c)
	{
		if(b&d)
		{
			printf("\b%d",e);
		}
		if(b&e)
		{
			printf("\b%d",d);
		}
		if(d&e)
		{
			printf("\b%d",b);
		}
	}
	else if(a&d)
	{
		if(b&c)
		{
			printf("\b%d",e);
		}
		if(b&e)
		{
			printf("\b%d",c);
		}
		if(c&e)
		{
			printf("\b%d",b);
		}
	}
	else if(a&e)
	{
		if(b&c)
		{
			printf("\b%d",d);
		}
		if(b&d)
		{
			printf("\b%d",c);
		}
		if(d&c)
		{
			printf("\b%d",b);
		}
	}

}
