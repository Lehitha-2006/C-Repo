#include<stdio.h>
int arraysum(int[],int);
int main()
{
	int i,n;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int result=arraySum(arr,n);
	printf("Sum of the array elements is: %d\n",result);
	return 0;
}
int arraySum(int X[],int size)
{
	int sum=0,i;
	for(i=0;i<size;i++)
	{
		sum=sum+X[i];
	}
	return sum;
}
