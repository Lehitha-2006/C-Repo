#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number\n");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("The given number %d is a even number\n",n);
	}
	else
	{
		printf("The given number %d is a odd number\n",n);
	}
	return 0;
}
