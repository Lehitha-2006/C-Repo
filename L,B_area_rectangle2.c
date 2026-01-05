#include<stdio.h>
int main()
{
	//Declare the variable
	float L,B,area;
	//Reading of input
	printf("enter the L,B values\n");
	scanf("%f%f",&L,&B);
	//Processing
	area = L*B;
	//Output
	printf("Length = %f\n",L);
	printf("Breadth = %f\n",B);
	printf("Rectangle area = %.2f\n",area);
	return 0;
}

