#include<stdio.h>
int main()
{
	float c,fh;
	printf("enter the temperature in celsius\n");
	scanf("%f",&c);
	
	fh=(1.8*c)+32;
	printf("the temperature in farhenheit is: %f",fh);
	return 0;
}
