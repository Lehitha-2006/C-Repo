#include<stdio.h>
#include<string.h>
int main()
{
	char str[] = "Hello,World,C"; 
	char* token = strtok(str, ","); 
	while (token != NULL) 
	  { printf("%s ", token); token = strtok(NULL, ","); }

	return 0;
}
