#include<stdio.h>
int main()
{
	int n;
	printf("enter the year\n");
	scanf("%d",&n);
	
	if(n==366)
	{
		printf("given year is leap year\n",n);
	}
	else if(n==365)
	{
		printf("given year is non leap year\n",n);
	}
	else
	{
		printf("enter 366 or 365");
	}
	return 0;
}
