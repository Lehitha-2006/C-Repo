#include<stdio.h>
int findfactors(int);
int main()
{
	int n;
	scanf("%d",&n);
	int fact_count=findfactors(n);
	printf("\nFactors of a given number %d is: %d",n,fact_count);
	if(n%2==0)
	{
		printf("given number is: PRIME NUMBER\n");
	}
	else
	{
		printf("given number is not a PRIME NUMBER\n");
	}
	return 0;
}

