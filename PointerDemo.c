#include<stdio.h>
int main()
{
	int x=10;
	int *ptrl;
	ptrl=&x;
	printf("%u %u\n",&x,ptrl);
	printf("%d %d",x,*ptrl);
	return 0;
}
