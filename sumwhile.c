#include<stdio.h>
int main()
{
	int n,rem,sum;
	scanf("%d",&n);
	
	while(n>0)
	{
		rem=n%10;
		n=n/10;
		sum=rem+n;
		printf("%d",sum);
	}
	return 0;
}
