#include<stdio.h>
int main()
{
	char item[20];
	int i;
	printf("Enter the name of item\n");
	scanf("%s",item);
	int len=0;
	
	for(i=0;item[i]!=0;i++)
	{
		len++;
	}
	printf("Length of the given string %s is: %d",item,len);
	return 0;
}
