#include<stdio.h>
int main()
{
	int n;
	printf("enter the basic salary of an employee\n");
	scanf("%d",&n);
	
	if(n<=10000)
	{
		printf("HRA=20%,DA=80%\n");
	}
	else if(n<=20000)
	{
		printf("HRA=25%,DA=90%\n");
	}
	else if(n>20000)
	{
		printf("HRA=30%,DA=95%\n");
	}
	return 0;
}
