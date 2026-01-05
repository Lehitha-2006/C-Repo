#include<stdio.h>
int main()
{
	int n;
	printf("enter the students marks\n",n);
	scanf("%d",&n);
	
	if(n>=90)
	{
	printf("Grade A\n");
	}
	else if(n>=80)
	{
		printf("Grade B\n");
	}
	else if(n>=70)
	{
		printf("Grade C\n");
	}
	else if(n>=60)
	{
		printf("Grade D\n");
	}
	else if(n<60)
	{
		printf("Grade F\n");
	}
	
	return 0;
}
