#include<stdio.h>
int main()
{
	int age;
	scanf("%d",&age);
	if(age<=2)
	{
		printf("infant");
	}
	else if(age>=3 && age<=12)
	{
		printf("Child");
	}
	else if(age>=13 && age<=19)
	{
		printf("teen");
	}
	else if(age<=20 && age>=64)
	{
		printf("adult");
	}
	else(age>=65);
	{
		printf("senior");
	}
	return 0;
}
