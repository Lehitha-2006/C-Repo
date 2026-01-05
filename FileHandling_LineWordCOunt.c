#include<stdio.h>
int main()
{
	FILE *fp1;
	fp1=fopen("Friends.txt","r");
	if(fp1==NULL)
	{
		printf("File Connection failed\n");
		return 1;
	}
	char ch;
	int words_count=0,line_count=0,char_count=0;
	while(1)
	{
		ch=fgetc(fp1);
		if(ch==EOF)
		 break;
		 
		printf("%c",ch);
		
		char_count++;
		
		if(ch==' ' || ch=='/n')
		  words_count++;
		if(ch=='\n')
		  line_count++;
	}
	printf("Charactr count = %d\n",char_count);
	printf("word count = %d\n",words_count);
	printf("Lines count = %d\n",line_count);
	
	fclose(fp1);
	return 0;
}
