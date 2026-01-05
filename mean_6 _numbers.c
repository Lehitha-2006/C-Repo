#include<stdio.h>
int main()
{
	int x1,x2,x3,x4,x5,x6,n = 6;
	float mean;
	printf("enter the values of x1,x2,x3,x4,x5,x6");
	scanf("%d%d%d%d%d%d",&x1,&x2,&x3,&x4,&x5,&x6);
	
	mean = (x1+x2+x3+x4+x5+x6)/n;
	printf("x1 = %d x2 = %d x3 = %d\n",x1,x2,x3);
	printf("x4 = %d x5 = %d x6 = %d\n",x4,x5,x6);
	printf("mean = %f",mean);
	return 0;
}
