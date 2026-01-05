#include<stdio.h>
int main()
{
	float sub1,sub2,sub3,sub4,sub5,sub6,total,avg_marks,percentage;
	printf("Enter the five subjects marks\n");
	scanf("%f%f%f%f%f",&sub1,&sub2,&sub3,&sub4,&sub5);
	
	total=sub1+sub2+sub3+sub4+sub5;
	avg_marks=total/5;
	percentage=total/500*100;
	
	printf("sub1 marks:%.2f\n",sub1);
	printf("sub2 marks:%.2f\n",sub2);
	printf("sub3 marks:%.2f\n",sub3);
	printf("sub4 marks:%.2f\n",sub4);
	printf("sub5 marks:%.2f\n",sub5);
	printf("total marks:%.2f\n",total);
	printf("average marks:%.2f\n",avg_marks);
	printf("percentage is:%.2f",percentage);
	
	return 0;
}
