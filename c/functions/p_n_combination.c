#include<stdio.h>
int factorial(int x)
{
    int mul = 1;
    for ( int y =1 ; y <= x ; y = y+1)
    {
        mul=mul*y;
    }
    return mul ;
}

int main()
{
    int n,r ;
    float ncr ;
    printf("the value of n is ");
    scanf("%d",&n);
    printf("the value of  r is ");
    scanf("%d",&r);
    ncr= factorial(n) / (factorial( r) * factorial( n-r));
    printf("the value of ncr is %f",ncr);
    return 0 ;
}
