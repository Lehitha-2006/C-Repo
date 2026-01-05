#include<stdio.h>
int main()
{
	char item[50];
	printf("Enter the word\n");
	scanf("%s",item);
	int word_count=0,i;
	
	for(i=0;item[i]!=0;i++)
	{
		word_count++;
	}
	printf("The total number of words are: %d\n",word_count);
	return 0;
}
