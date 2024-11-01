#include<stdio.h>
int main()
{
    int CP,SP,Profit,Loss;
    scanf("%d",&CP);
    scanf("%d",&SP);
    if(SP-CP>0)
    {
        printf("Profit");
    }
    else if(CP-SP>0)
    {
        printf("Loss");
    }
    else
    {
        printf("No Profit and No Loss");
    }
    return 0;
}