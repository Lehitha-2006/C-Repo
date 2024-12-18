#include<stdio.h>
int main()
{
    int cp,sp;
    scanf("%d  %d",&cp,&sp);
    double profit,percentage;
    profit=sp-cp;
    percentage=(profit/cp)*100;
    printf("%.2lf",percentage);
    return 0;
}