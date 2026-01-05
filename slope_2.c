#include<stdio.h>
#include<math.h>
int main()
{
	int x1,y1,x2,y2;
	float m;
	printf("enter the values of x1,y1,x2,y2\n");
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	
	m=(y2-y1)/(x2-x1);
	printf("x1 = %d y1 = %d x2 = %d y2 = %d\n",x1,y1,x2,y2);
	printf("m = %f",m);
	return 0;
}
