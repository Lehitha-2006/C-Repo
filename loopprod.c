#include<stdio.h>
int main()
{
	int n,prod=1;
	scanf("%d",&n);
	int i;
	for(i=1;i<=n;i++)
	{
		prod=prod+i;
	}
	printf("prod = %d",prod);
	return 0;
}
