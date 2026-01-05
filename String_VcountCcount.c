#include<stdio.h>
int main()
{
	char item[26];
	int i;
	printf("Enter the name of item\n");
	scanf("%s",item);
	int Ccount=0,Vcount=0;
	
	for(i=0;item[i]!=0;i++)
	{
		if(item[i]=='a' || item[i]=='e' || item[i]=='i' || item[i]=='o' || item[i]=='u')
		  Vcount++;
		else
		  Ccount++;
	}
	printf("The vowel letters are:%d\n",Vcount);
	printf("The consonant letters are:%d\n",Ccount);
	return 0;
	
}
