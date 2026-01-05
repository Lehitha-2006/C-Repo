#include<stdio.h>
#include<math.h>
int main()
{
	int a,n,d,nthterm;
	printf("enter the initial term a\n");
	printf("enter the number of elements in arithmetic sequence n\n");
	printf("enter the difference in the arithmetic sequence d\n");
	scanf("%d%d%d",&a,&n,&d);
	
	nthterm=a+(n-1)*d;
	printf("a = %d n = %d d = %d\n",a,n,d);
	printf("nthterm = %.3f",nthterm);
	return 0;
	getch();
}
