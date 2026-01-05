#include<stdio.h>
int main()
{
	int n;
	printf("enter the age of a person\n");
	scanf("%d",&n);
	
	if(n>=18)
	{
		printf("the person is eligible for voting\n");
	}
	else
	{
		printf("the person is not eligible for voting\n");
	}
	if(n>=60 || n<=80 )
	{
		printf("the person is eligible for voting also he or she is senior citizen\n");
	}
	else(n>80);
	{
		printf("the person is eligible for voting also he or she is not a senior citizen\n");
	}
	return 0;
}
