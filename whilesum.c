#include<stdio.h>
int main()
{
	int n,s=0,temp,rem;
	scanf("%d",&n);
	temp=0;
	while(n>0)
	{
		rem=n%10;
		s=s+rem;
		n=n/10;
	}
		printf("%d\n",s);
	return 0;
}
