#include<stdio.h>
int main()
{
	int n;
	printf("enter the month number as n\n");
	scanf("%d",&n);
	
	if(n==3 || n==4 || n==5)
	{
		printf("Summer season");
	}
	else if(n==6 || n==7 || n==8 || n==9)
	{
		printf("Raniy season");
	}
	else if(n==10 || n==11 || n==12 || n==1 || n==2)
	{
		printf("Winter season");
	}
	else
	{
		printf("Enter a valid number between 1 to 12");
	}
	return 0;
}
