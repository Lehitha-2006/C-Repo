#include<stdio.h>
#include<math.h>
int main()
{
	int b,h;
	float area;
	
	printf("enter the base and height\n");
	scanf("%d%d",&b,&h);
	
	area=1.0f/2*b*h;
	
	printf("area = %.2f",area);
	return 0;
}
