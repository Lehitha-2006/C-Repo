#include<stdio.h>
int main()
{
	int M[3][5]={
		         {50,68,76,89,54},
		         {67,98,48,78,96},
		         {34,56,65,39,87}
				};
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("M[%d][%d]=%d",i,j,M[i][j]);
		}
		printf("\n");
	}
	                
	
	 return 0;                  
}
