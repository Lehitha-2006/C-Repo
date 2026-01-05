#include<stdio.h>
int main()
{
	FILE *fp1;
	int count=0;
	fp1=fopen("Friends.txt","r");
	if(fp1==NULL)
	{
		printf("File Connection failed\n");
		return 1;
	}
	char ch;
	while(1)
	{
		ch=fgetc(fp1);
		if(ch==EOF)
		 break;
		 
		printf("%c",ch);
		if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
		 count++;
	}
	printf("%d",count);
	fclose(fp1);
	return 0;
}
