#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	int arr[26] = {0};
	char str[50];
	printf("Enter any string\n");
	gets(str);
	printf("Before uppercase conversion: %s\n",str);
	strupr(str);
	printf("After uppercase conversion: %s\n",str);
	for(i=0;str[i]!='\0';i++)
	{
		arr[str[i]-65]++;
		
	}
	for(i=0;i<26;i++)
	{
		if(arr[i]!=0)
		printf("%c -> %d \n",(char)i+65,arr[i]);
		
	}
	return 0;
}
