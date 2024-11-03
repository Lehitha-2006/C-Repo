#include<stdio.h>
int main()
{
    int A,B,X,Y;
    scanf("%d    %d    %d    %d",&A,&B,&X,&Y);
    if((2*A+B)>(2*X+Y))
    {
        printf("Messi");
    }
    else if((2*A+B)<(2*X+Y))
    {
        printf("Ronaldo");
    }
    else
    {
        printf("Equal");
    }
    return 0;
}