#include<stdio.h>
int main()
{
	int i,j,rows,cols;
	scanf("%d%d",&rows,&cols);
	int arr[3][3]={0};
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",arr[rows][cols]);
			printf("\n");
		}
	}
	return 0;
}
