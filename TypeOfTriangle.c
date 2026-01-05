#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the sides of a triangle\n",a,b,c);
	scanf("%d%d%d",&a,&b,&c);
	
	if(a==b || b==c || c==a)
	{
		printf("the triangle is a equilatoral triangle\n");
	}
	else
	{
		printf("the triangle is a scalene triangle\n");
	}
	if(a==b || b==c)
	{
		printf("the triangle is a isosceles triangle\n");
	}
	else
	{
	    printf("the triangle is a ")	
	}
	

	
}
