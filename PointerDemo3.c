#include<Stdio.h>
int main()
{
	int arr[5]={101,202,303,404,505};
	int *ptr,i;
	ptr=&arr[0];
	printf("Accessing of array elements by sing pointer variable\n");
	for(i=0;i<5;i++)
	{
		printf("%u -> %d\n",(ptr+i),*(ptr+i));
	}
	return 0;
}
//*most imp for sem*
