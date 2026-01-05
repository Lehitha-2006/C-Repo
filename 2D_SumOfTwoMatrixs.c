#include<stdio.h>
int main()
{
	int i,j,rows,cols;
	scanf("%d%d",&rows,&cols);
	int M1[rows][cols],M2[rows][cols],M3[rows][cols];
	printf("\nEnter the %d elements of Matrix-A\n",rows*cols);
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			scanf("%d",&M1[i][j]);
		
		}
	}
		printf("\nEnter the %d elements of Matrix-B\n",rows*cols);
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			scanf("%d",&M2[i][j]);
		}
	}
		
		for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			M3[i][j]=M1[i][j]+M2[i][j];
		}
	}
	printf("\nMatrix-A\n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf("%d ",M1[i][j]);
		}
		printf("\n");
	}
	printf("\nMatrix-B\n");
		for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf("%d ",M2[i][j]);
		}
		printf("\n");
	}
	printf("\nMatrix-C\n");
		for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf("%d ",M1[i][j]+M2[i][j]);
		}
		printf("\n");
	}
	return 0;
	
}
