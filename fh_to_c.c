#include<stdio.h>
int main()
{
	float c,fh;
	printf("enter the temperature in fahrenheit\n");
	scanf("%f\n",&fh);
	
	c=(fh-32)/1.8;
	printf("temperature in degree celius = %f",c);
	return 0;
}
