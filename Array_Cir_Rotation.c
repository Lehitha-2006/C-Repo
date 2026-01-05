#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	 scanf("%d",&arr[i]);
	printf("Array element before circular rotation\n");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
	int temp=arr[n-1];
	for(i=n-1;i>=1;i--)
	{
		arr[i]=arr[i-1];
	}
	arr[0]=temp;
	printf("Array elements after circular rotation\n");
	for(i=0;i<n;i++)
	 printf("%d ",arr[i]);
}
