#include<stdio.h>
int PrintFibonacci(int);
int main()
{
	int range;
	scanf("%d",&range);
	PrintFibonacci(range);
	return 0;
}
int PrintFibonacci(int n)
{
	int a=0,b=1,c;
	printf("%d %d ",a,b);
	c=a+b;
	while(c<=n)
	{
		printf("%d ",c);
		a=b;
		b=c;
		c=a+b;
	}
}

