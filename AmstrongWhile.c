#include<stdio.h>
#include<math.h>
int findArmStrongCalculation(int);
int main()
{
	int n,res;
	scanf("%d",&n);
	res=findArmStrongCalculation(n);
	if(n==res)
	{
	 printf("Given number %d is a Armstrong number",n);
	}
	else
	{
		printf("Given number %d is not a Armstrong number",n);
	}
	    return 0;
}
int findArmStrongCalculation(int n)
{
   int digits=(int)log10(n)+1;
   int rem,sum=0;
   while(n>0)
   {
   	  rem=n%10;
   	  sum=sum+(int)pow(rem,digits);
   	  n=n/10;
   }
   return sum;
}
