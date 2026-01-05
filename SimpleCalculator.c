#include<stdio.h>
#include<math.h>
int main()
{
	int add,sub,mult,div,mod,m,n;
	printf("enter two numbers\n",m,n);
	scanf("%d%d",&m,&n);
	char ch;
	scanf("%c",&ch);
	if(ch == '+')
	{
		printf("sum of m and n is %d\n",m+n);
	}
	else if(ch == '-')
	{
		printf("subtraction of m and n is %d\n",m-n);
	}
	else if(ch == '*')
	{
		printf("multiplication of m and n is %d\n",m*n);
	}
	else if(ch == '/')
	{
		printf("division of m and n is %d\n",m/n);
	}
	else if(ch == '[]')
	{
		printf("modulous of m is %d\n",[m]);
		printf("modulous of n is %d\n",[n]);
	}
	else 
	{
		printf("enter a valid operation from the above");
	}
	return 0;
}
