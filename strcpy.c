#include<stdio.h>
#include<string.h>
int main()
{
   char src[] = "Hello"; 
   char dest[10]; 
    strcpy(dest, src); 
    printf("%s", dest); // Output: Hello
 return 0;
}
