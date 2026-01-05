#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i=1;
	while(i<=10)
	{
		int a;
		a=i*n;
		printf("%d x %d = %d\n",i,n,a);
		i++;
	    
	}
	printf("task completed");
	return 0;
}
