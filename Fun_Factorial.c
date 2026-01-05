#include<stdio.h>
int Factorial(int);
int main()
{
	int n,fact;
	scanf("%d",&n);
	fact=Factorial(n);
	printf("Factorial of %d is: %d",n,fact);
	return 0;
}
int Factorial(int n)
{
	int fact=1,i;
	for(i=n;i>=1;i--) 
	{
		fact=fact*i;
	}
	return fact;
}
