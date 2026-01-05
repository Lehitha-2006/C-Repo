#include<stdio.h>
int main()
{
	char item[20];
	int i;
	printf("Enter the item name\n");
	scanf("%s",item);
	
	for(i=0;item[i]!='\0';i++)
	{
		printf("%c ",item);
	}
	return 0;

}
