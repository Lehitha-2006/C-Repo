#include<stdio.h>
int main()
{
	int n,s=0,digit;
	scanf("%d",&n);
	while(n!=0)
	{
		digit=n%10;
		s=s+digit;
		n=n/10;
	}
	printf("%d",s);
	return 0;
}
