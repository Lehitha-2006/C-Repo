#include<stdio.h>
int main()
{
	char name[20]={'s','r','i','n','u'};
	printf("%d\n",sizeof(name));
	char ch[]={'a','e','c','\0'};
	printf("%d\n",sizeof(ch));
	printf("%s\n",name);
	printf("%s\n",ch);
	
	char branch[10];
	scanf("%s",branch);
	printf("%s\n",branch);
	
	return 0;
}
