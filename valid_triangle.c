#include<stdio.h>
int main()
{
	float a,b,c,sum;
	
	printf("enter angles of triangle\n");
	scanf("%f%f%f",&a,&b,&c);
	
	sum=a+b+c;
	if(sum==180)
	{
		printf("It is a valid triangle");
	}
	else
	{
		printf("It is not a valid not a valid triangle");
	}
	return 0;
}
