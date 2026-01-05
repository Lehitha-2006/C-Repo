#include<stdio.h>
#include<math.h>
int main()
{
	int centroid,x1,x2,x3,y1,y2,y3;
	printf("enter the values of sides of triangle\n");
	scanf("%d%d%d%d%d%d",&x1,&x2,&x3,&y1,&y2,&y3);
	
	centroid=((x1+x2+x3)/3,(y1+y2+y3)/3);
	printf("x1 = %d x2 = %d x3 = %d\n",x1,x2,x3);
	printf("y1 = %d y2 = %d y3 = %d\n",y1,y2,y3);
	printf("centroid = %d",centroid);
	
	return 0;
	
}
