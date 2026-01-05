#include<stdio.h>
int main()
{
	int i,j,rows,cols;
	scanf("%d%d",&rows,&cols);
	int arr[rows][cols];
	printf("Enter %d elements\n",rows*cols);
	int sum;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			scanf("%d",&arr[i][j]);  
		}
	}
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf("%d ",arr[i][j]);
			if(i==j)
			  sum=sum+arr[i][j];
		}
		printf("\n");
	}
	printf("Sum of all the elements of the 2D array is: %d\n",sum);
	return 0;
}
