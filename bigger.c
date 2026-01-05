#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b)
	{
		printf("%d is bigger",a);
    }
    else
    {
    	printf("%d is bigger",b);
	}
	if(b>c)
	{
		printf("%d is bigger",b);
	}
	else
	{
		printf("%d is bigger",c);
	}

		
	return 0;
}
