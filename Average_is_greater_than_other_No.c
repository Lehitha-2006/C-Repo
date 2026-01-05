#include<stdio.h>

int main() {
	// your code goes here
	int a,b,c,t;
	scanf("%d",&t);

	
	while(t--)
	{
	    scanf("%d%d%d",&a,&b,&c);
	    float avg=(a+b)/2.0;
	    if(avg>c)
	    {
	        printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }
	}
	return 0;
	

}


