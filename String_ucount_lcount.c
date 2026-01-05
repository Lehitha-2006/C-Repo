#include<stdio.h>
int main()
{
	char item[20];
	int i;
	printf("Enter the name of item\n");
	scanf("%s",item);
	int ucount=0,lcount=0;
	int dcount=0,scount=0;
	
	for(i=0;item[i]!=0;i++)
	{
		if(item[i]>='A' && item[i]<='Z')
		   ucount++;   //ucount = ucount+1;
		else if(item[i]>='a' && item[i]<='z')
		   lcount++;
		else if(item[i]>='0' && item[i]<='9')
		   dcount++;
		else
		   scount++;
	}
	printf("Number of uppercase characters:%d\n",ucount);
	printf("Number of lowercase characters:%d\n",lcount);
	printf("Number of digits:%d\n",dcount);
	printf("Number of symbols:%d\n",scount);
	return 0;
	
}
