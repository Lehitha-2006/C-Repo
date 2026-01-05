#include<stdio.h>
int main()
{
	int L,B;
	float perimeter;
	
	printf("enter the value of length\n",L);
	printf("enter the value of breadth\n",B);
	scanf("%f%f",&L,&B);
	
	perimeter=2*(L+B);
	printf("perimeter=%.2f",perimeter);
	return 0;
}
