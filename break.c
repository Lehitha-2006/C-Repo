#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	printf("break demo\n");
	for(i=1;i<=n;i++)
	{
		if(i==5)
		break;  //exist from the loop
		printf("%d ",i);
	}
	printf("work completed");
	return 0;
}
