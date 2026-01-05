#include<stdio.h>
int main()
{
	int i,j;
	
	for(i=1;i<=4;i++)  //rows
	{
		for(j=4;j>=1;j--)  //columns
		{
			if(j>i)
			printf(" \n");
			else
			printf("%d\n",j);
		}

	}
	return 0;
	
}
