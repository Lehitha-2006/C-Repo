#include<stdio.h>
int main()
{
	char c;
	printf("enter the colour name\n");
	scanf("%c",&c);
	
	if(c=='V')
	{
		printf("violet\n");
	}
	else if(c=='I')
	{
	printf("indigo\n");
	}
	else if(c=='B')
	{
	printf("blue\n");
	}
	else if(c=='G')
	{
	printf("green\n");
	}
	else if(c=='Y')
	{
	printf("yellow\n");
	}
	else if(c=='O')
	{
	printf("orange\n");
	}
	else if(c=='R')
	{
	printf("red\n");
	}
	else
	{
	printf("not valid for any other colour");
	}
	
	return 0;
}
