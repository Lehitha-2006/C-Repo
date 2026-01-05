#include<stdio.h>
void addition(int,int);
int subtraction(int,int);
int multiplication(int,int);
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	addition(x,y);
	printf("control comes from addition function");
	int res=subtraction(x,y);
	printf("subtraction = %d",res);
	multiplication(x,y);
	return 0;
}
int multiplication(int m,int n)
{
	int mult=m*n;
	printf("Multiplication=%d",mult);
}
int subtraction(int m,int n)
{
	int diff=m-n;
	return diff;
}
void addition(int m,int n)
{
	int sum=m+n;
	printf("sum = %d",sum);
}


