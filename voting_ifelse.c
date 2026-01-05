#include<stdio.h>
int main()
{
	int age;
	
	printf("enter your age:\n");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("Hi! you are eligible for voting\n");
		printf("thank you for using my application\n");
	}
	else
	{
		printf("Sorry! you are not eligible for voting\n");
		printf("you need to wait for %d more years to get the vote\n");
	}
	return 0;
}
