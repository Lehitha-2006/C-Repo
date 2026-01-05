#include<stdio.h>
int main()
{
	int a=5,b=11,n;
	printf("enter a number\n");
	scanf("%d",&n);
	
	if(n%5==0 & n%11==0)
	{
		printf("%d is a number that divides by 5 and 11\n",n);
	}
	else
	{
		printf("%d is a number that is not is not divided by 5 and 11\n",n);
	}
	return 0;
}
