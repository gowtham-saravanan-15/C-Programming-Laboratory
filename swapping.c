#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the numbers you want to swap:");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("The value of a and b after swapping is:%d%d",a,b);
    return 0;
}
