#include<stdio.h>
int main()
{
    int a,b,s;
    scanf("%d  %d",&a,&b);
    s=a+b+(a*b);
    if(s==111)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}