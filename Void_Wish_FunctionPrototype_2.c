#include<stdio.h>
void wish();                    //*function prototype-with this heading u can write the void wish in the starting or ending
void displayYourName();                      //*program.
int main()
{
	printf("Before Wish Call...\n");
	wish();                   //*function call
	printf("After Wish Call...\n");
}
void wish()                  //*function definition
{
	printf("Good Afternoon\n");
}
void displayYourName()
{
	printf("Hello\n");
}
