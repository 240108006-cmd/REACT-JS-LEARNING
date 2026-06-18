#include<stdio.h>
int swap(int x , int y )
{
    int c ;
    c = x ; 
    x = y ; 
    y = c;
    return x , y ; 
}
int main()
{
    int a ,b;
    printf("the value of a is ");
    scanf("%d",&a);
    printf("the value of b is ");
    scanf("%d",&b);
    swap(a,b);
    printf("after swapping the variables \n");
    printf("value of a is %d",a);
    printf("value of b is %d",b);
    return  0;
}