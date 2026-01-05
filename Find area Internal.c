#include<stdio.h>
#include<math.h>
float findareaofcircle(int pi,int radius);
float findareaofsquare(int side);
float findareaofrectangle(int length,int width);
float findareaoftriangle(int base,int height);

float findareaofcircle(int pi,int radius)
{
	return pi*radius*radius;
}
float findareaofsquare(int side)
{
	return side*side;
}
float findareaofrectangle(int length,int width)
{
	return length*width;
}
float findareaoftriangle(int base,int height)
{
	return 0.5*base*height;
}
int main()
{
	int i,n;
	float radius,side,pi,length,width,base, height;
	int choice,result;
	scanf("%d",&choice);
	printf("Enter a number between (1-4)\n");
	printf("1.To find the area of circle\n");
	printf("2.To find the area of square\n");
	printf("3.To find the area of rectangle\n");
	printf("4.To find the area of triangle\n");
	
	switch(choice)
	{
		case 1:
			printf("Enter the radius value\n");
			scanf("%.2f",&radius);
			result=findareaofcircle(pi,radius);
			printf("The area of circle is: %.2f\n",result);
		case 2:
			printf("Enter the side value\n");
			scanf("%.2f",&side);
			result=findareaofsquare(side);
			printf("The area of square is: %.2f\n",result);
		case 3:
			printf("Enter the value of lenghth and width\n");
			scanf("%.2f",&length);
			scanf("%.2f",&width);
			result=findareaofrectangle(length,width);
			printf("The area of rectangle is: %.2f\n",result);
		case 4:
			printf("Enter the value of base and height\n");
			scanf("%.2f",&base);
			scanf("%.2f",&height);
			result=findareaoftriangle(length,width);
			printf("The area of triangle is: %.2f\n",result);
		default:
			printf("Enter a valid number between (1-4)\n");
	}
	 return 0;
}
	

