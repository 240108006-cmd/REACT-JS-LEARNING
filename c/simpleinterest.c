#include<stdio.h>
int main()
{
    float principal,rate,time;
    printf("the value of principal is ");
    scanf ("%f",&principal);
    printf("the value of rate is ");
    scanf ("%f",&rate);
    printf("the value of time is ");
    scanf ("%f",&time);
    printf("the value of simple interest is %f", (principal*rate*time)/100);
    return 0;
}