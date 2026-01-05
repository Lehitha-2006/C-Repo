#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int j,count=0;
	for(i=100;i<=500;i++)
	{
		count=0;
		for(j=2;j<(i/2);j++)
		{
			if(i%j==2)
			{
				count=1;
				
			}
		}
	}
	printf("%d",n);
	return 0;
	
}
