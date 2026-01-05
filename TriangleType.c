#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the three sides of a triangle\n",a,b,c);
	scanf("%d%d%d",&a,&b,&c);
	
	if(a==b && b==c && c==a) 
	{
		printf("the triangle is equilatoral\n",a,b,c);
	}
	else if(a==b || b==c || c==a)
	{
		printf("the triangle is isosceles\n",a,b,c);
	}
	else
	{
		printf("the triangle is scalence",a,b,c);
	}
	return 0;
}
