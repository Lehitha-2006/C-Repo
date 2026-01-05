#include<stdio.h>
int main()
{
	char item[20];
    int i;
	printf("enter the item\n");
	scanf("%s",item);
	int len=0;
	
	for(i=0;item[i]!=0;i++)
	{
		len++;
	}
	printf("The length of item %s is: %d",item,len);
	return 0;
}
