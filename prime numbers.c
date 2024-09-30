#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    if(n==2)
    printf("It is a prime number");
    else  if(n%2==0||n%3==0)
    printf("It is not a prime number");
    else
    printf("It is a prime number");
    return 0;
    
}
