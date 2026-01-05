#include<stdio.h>
int main()
{
	int n;
	printf("enter a number\n");
	scanf("%d",&n);
	
	if(n>=10 && n<=50)
	{
		printf("true,it is falls within a specified range\n",n);
	}
	else
	{
		printf("false,it id not falls within a specified range\n",n);
	}
	
	return 0;
}
