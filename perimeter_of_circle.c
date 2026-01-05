#include<stdio.h>
int main()
{
	int radius;
	float pi=3.14,perimeter;
	printf("enter the radius value\n");
	scanf("%d",&radius);
	
	perimeter=2*pi*radius;
	
	printf("radius = %d\n",radius);
	printf("perimeter = %f\n",perimeter);
	return 0;
}
