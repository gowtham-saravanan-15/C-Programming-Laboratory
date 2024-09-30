#include<stdio.h>
int main()
{
    float p,n,r,si;
    printf("Enter the principle amount:");
    scanf("%f",&p);
    printf("Enter the time:");
    scanf("%f",&n);
    printf("Enter the rate of interest");
    scanf("%f",&r);
    si=p*n*r/100;
    printf("The simple interest is:%f",si);
    return 0;
}
