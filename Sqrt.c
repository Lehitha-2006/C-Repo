#include<stdio.h>
#include<math.h>
int main()
{
	float num;
	scanf("%f",&num);
	float sqrt_num=sqrt(num);
	
	if(num<0)
	{
		printf("Square root of negative numbers is not defined\n");
	}
	else
	{
		printf("Square root of %.2f is: %.2f\n",num,sqrt_num);
	}
	return 0;
}

