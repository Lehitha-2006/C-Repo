#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	printf("continue demo\n");
	for(i=1;i<=n;i++)
	{
		if(i==5)
		continue;  //stop the current iteration the control will go to next iteration
		printf("%d ",i);
	}
	printf("work completed");
	return 0;
}
