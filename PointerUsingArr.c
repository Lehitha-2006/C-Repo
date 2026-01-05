#include<stdio.h>
int main()
{
	int arr[5]={10,20,30,40,50};
	printf("Accessing of elements using array name \n");
	int i;
	for(i=0;i<5;i++)
	{
		printf("%d ",arr[i]);
	}
	int *ptr;
	ptr=arr;
	printf("\n");
	for(i=0;i<5;i++)
	{
		printf("%d ",*(ptr+i));
	}
	
	
}
