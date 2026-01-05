#include<Stdio.h>
int add(int,int);
int subtract(int,int);
int Muiltiplication(int,int);
int Division(int,int);
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	
	int sum=add(x,y);
	int Diff=subtract(x,y);
	int Multiplication=mult(x,y);
	int Division=div(x,y);
	
	printf("Addition of %d and %d is: %d\n",x,y,sum);
	printf("Subtraction of %d and %d is: %d\n",x,y,Diff);
	printf("Multiplication of %d and %d is: %d\n",x,y,Multiplication);
	printf("Division of %d and %d is: %d\n",x,y,Division);
	
	return 0;
}
int add(int a,int b)
{
	return a+b;
}
int subtract(int a,int b)
{
	return a+b;
}
int mult(int a,int b)
{
	return a*b;
}
int div(int a,int b)
{
	return a/b;
}
