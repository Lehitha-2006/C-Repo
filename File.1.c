#include<stdio.h>
#include<math.h>
int FindDistance(float int_vel,float time,float acce)
{
	return (int_vel*time)+(0.5*acce*time*time);
}
int main()
{
	float int_vel,time,acce,distance;
	printf("Enter the intitial velocity\n");
	scanf("%f",&int_vel);
	printf("Enter the acceleration\n");
	scanf("%f",&acce);
	printf("Enter the time\n");
	scanf("%f",&time);
	
	distance=FindDistance(int_vel,time,acce);
	
	printf("The Distance travelled bu an object is: %.2f",distance);
	return 0;
	
}
