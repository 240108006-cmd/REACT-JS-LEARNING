#include<stdio.h>
int factorial(int x)
{
    int mul=1;
    for (int a = 1; a <=x ; a = a+1)
    {
        mul= mul*a;
    }
    return mul;
}
int main()
{
    int n,r ;
    printf("the value of n is ");
    scanf("%d",&n);
    printf("the value of r is ");
    scanf("%d",&r);
    printf("%d",factorial(n)/factorial(n-r));
    return 0 ;
}
