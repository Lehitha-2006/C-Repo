#include<stdio.h>
int main()
{
	int n,a,l;
	float sn;
	printf("enter the values of n,a,l");
	scanf("%d%d%d",&n,&a,&l);
	
	sn=n/2*(a+l);
	printf("n = %d a = %d l = %d\n",n,a,l);
	printf("sn = %f",sn);
	return 0;
}
