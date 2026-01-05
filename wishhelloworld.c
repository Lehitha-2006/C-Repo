#include<stdio.h>
int main()  //main function
{
	wish();
	printf("control comes from wish function\n");
	wish();
	return 0;
}
void wish()  //user defined function
{
	printf("Hello world\n");
}
