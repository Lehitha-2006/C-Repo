#include<stdio.h>
int main()
{
	int n,$300,$500;
	printf("enter the amount\n",n);
	scanf("%d",&n);
	
	if(n>$500)
	{
		printf("20 percent discount\n");
	}
	else if(n<=$300 && n>=$500)
	{
		printf("10 percent discount\n");
	}
	else if(n<$300)
	{
		printf("no discount\n");
	}
	else
	{
		printf("enter a valid amount between $300 to $500");
	}
	return 0;
}
