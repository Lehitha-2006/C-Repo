#include<stdio.h>
#include<math.h>
int main()
{
    double pf,salary,hra,da,gross;
    scanf("%lf",&salary);
    scanf("%lf",&hra);
    scanf("%lf",&da);
    pf=(salary)*12/100;
    gross=salary+hra+da+pf;
    printf("%.2lf\n",pf);
    printf("%.2lf\n",gross);
    return 0;
}