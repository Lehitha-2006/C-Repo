#include<stdio.h>
int main()
{
	float m,w,h;
	printf("enter the BMI of a person\n",m);
	scanf("%f",&m);
	
	if(m<18.5)
	{
		printf("Underweight\n");
	}
	else if(18.5<=m<24.9)
	{
		printf("Normal weight\n");
	}
	else if(25<=m<29.9)
	{
		printf("Overnight\n");
	}
	else if(m>=30)
	{
		printf("Obesity\n");
	}
	return 0;
}
