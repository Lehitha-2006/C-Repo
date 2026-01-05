#include<stdio.h>
int main()
{
	int n,Red,Yellow,Green;
	printf("enter the light colour\n",n);
	scanf("%d",&n);
	
	if(n==Red)
	{
		printf("Stop\n");
	}
	else if(n==Yellow)
	{
		printf("Slow down\n");
	}
	else if(n==Green)
	{
		printf("Go\n");
	}
	else
	{
		printf("enter a valid light colour");
	}
	return 0;
}
