#include<stdio.h>
int main()
{
    int a, b,r;
    printf("the value of a is ");
    scanf("%d",&a);
    printf("the value of b is ");
    scanf("%d",&b);
    printf("the remainder will be %d",a%b);
    // case where a is  less than b is specual case where answer comes out to be a 
    return 0;
}