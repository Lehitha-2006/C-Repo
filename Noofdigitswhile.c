#include<stdio.h>
int findDigitsCount(int);  //function of prototype
int findDigitsCount(int n) //function definition
{
	int digits=0,rem;
	while(n>0)
	{
		rem=n%10;
		digits ++;
		n=n/10;
	}
	return digits;
}
int main()
{
	int n;
	scanf("%d",&n);
	int count=findDigitsCount(n);
	printf("No of digits of a given number %d is: %d",n,count);
	return 0;
}
