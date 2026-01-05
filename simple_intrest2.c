#include<stdio.h>
int main()
{
	int P,T,R;
	float I;
	//Assign the values
	P=100000;
	T=22;
	R=5;
	I=(P*T*R)/100;
	printf("principal amount = %d\n",P);
	printf("time in months = %d\n",T);
	printf("rate of intrest = %d\n",R);
	printf("simple intrest = %f",I);
	return 0;
}
