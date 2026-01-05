#include<stdio.h>
void increment(int *,int size);

void increment(int *pt,int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		*(ptr+1)=*(ptr+1)+1;
	} 
	
	printf("The elements in the array in increment function are:\n");
	for(i=0;i<size;i++)
	printf("%d ",*(ptr+1));
	
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	printf("Before Call Increment Function\n");
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	printf("\n");
	increment(arr,n);
	
	
}
