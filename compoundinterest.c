#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t;
    float ci;
    printf("Enter the principle amount:");
    scanf("%f",&p);
    printf("Enter the rate of interest:");
    scanf("%f",&r);
    printf("Enter the time:");
    scanf("%f",&t);
    ci=p*(pow((1+r/100),t));
    printf("The compound interest is:%f",ci);
    return 0;
    
}
