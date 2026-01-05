#include<stdio.h>
int findmin(int [],int);
int findmax(int [],int);

int findmin(int arr[],int size)
{
	int min=arr[0],i;
	for(i=1;i<size;i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	return min;
}
int findmax(int arr[],int size)
{
	int max=arr[0],i;
	for(i=1;i<size;i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	return max;
}
int main()
{
	int i;
	  printf("Enter the size of the array: ");
	  
	int size;
	printf("Enter %d elements:\n", size); 
	scanf("%d",&size);
	
	int arr[size];
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	int min=findmin(arr,size);
	int max=findmax(arr,size);
	printf("The minimum elements are: %d",min);
	printf("The maximun elements are: %d",max);
	return 0;
}



















