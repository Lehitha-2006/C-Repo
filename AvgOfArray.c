#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    float arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%f",&arr[i]);
    }
    float sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    float avg;
    for(i=0;i<n;i++)
    {
        avg=sum/n;
    }
    printf("%.2f",avg);
    return 0;
}

