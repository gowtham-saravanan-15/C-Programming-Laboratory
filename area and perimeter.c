#include<stdio.h>
int main()
{
    float l,b;
    float ar,pe;
    printf("Enter the length:");
    scanf("%f",&l);
    printf("Enter the breadth:");
    scanf("%f",&b);
    ar=l*b;
    pe=2*(l+b);
    printf("The area is%f\nThe perimeter is%f",ar,pe);
    return 0;
    
}
