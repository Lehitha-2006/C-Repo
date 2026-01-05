#include<stdio.h>
int main()
{
	int a,b,c,n;
	printf("Enter the sides of a triangle\n",a,b,c);
	scanf("%d%d%d",&a,&b,&c);
	
	if(a+b>c, b+c>a, a+c>b)
	{
		printf("it is a valid triangle\n");
	}
	else
	{
		printf("it is not a valid triangle\n");
	}
	return 0;
}
