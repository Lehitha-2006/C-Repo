#include<stdio.h>
#include<string.h>
int main()
{
	char s[50];
	printf("Enter any string\n");
	gets(s);
	int len=strlen(s);
	printf("length of %s is: %d\n",s,len);
	strupr(s);
	printf("After uppercase conversion: %s\n",s);
	strlwr(s);
	printf("After lowercase conversion: %s\n",s);
	strcpy(sl,s);
	printf("Value of sl after copy from s is: %s",sl);
	strrev(s);
	printf("After the reverse of string: %s\n",s);
	strcat(s,sl);
	printf("After string concatenation: %s\n",s);
	
	char s3[]="hello";
	char s4[]="hello";
	int d=strcmp(s3,s4);
	printf("%d",d);
	
	return 0;
}
