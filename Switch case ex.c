#include<stdio.h>
int main()
{
	char grade;
	printf("Enter grade (A-F):");
	scanf("%c",&grade);
	
	switch(grade)
	{
		case 'A':
			printf("Excellent!\n");
			break;
	    case 'B':
	    	printf("Good!\n");
	    	break;
	    case 'C':
	    	printf("Fair!\n");
	    	break;
	    case 'D':
	    	printf("Poor!\n");
	    	break;
	    case 'E':
	    	printf("Fail!\n");
	    	break;
	}
	return 0;
}
