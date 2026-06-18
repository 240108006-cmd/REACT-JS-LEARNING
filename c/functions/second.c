#include<stdio.h>
int sum (int x,int y)
{
    return x + y;
}
int main ()
{
    int  a, b ;
    printf("the first numebr is ");
    scanf("%d",&a);
    printf("the second numebr is ");
    scanf("%d",&b);
    int add = sum (a,b);
    printf("%d",add);
    return 0 ;
}