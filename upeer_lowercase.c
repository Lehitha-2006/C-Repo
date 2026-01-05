#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	//Assume the input contains only alphabets
	if(ch>='A' && ch<='Z')
	{
		printf("%c is a uppercase character\n",ch);
	}
	else
	{
		printf("%c is a lowercase character\n",ch);
	}
	return 0;
}
