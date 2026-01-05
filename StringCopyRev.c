#include<stdio.h>
#include<string.h>
int main()
{
	char A[20];
	char B[20];
	int i,len,j=0;
	printf("Enter the string\n");
	gets(A);
	len=strlen(A);
	printf("Length of %s is: %d\n",A,len);
	for(i=len-1;i>=0;i--)
	{
		B[j]=A[i];
		j++;
	}
	B[j]='\0';
	printf("Reverse of %s the string is: %s\n",A,B);
	return 0;
}
