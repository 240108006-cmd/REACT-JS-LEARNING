#include<stdio.h>
int main()
{
    int a,b,c ;
    printf("the value of a is ");
    scanf("%d",&a);
    printf("the value of b is ");
    scanf("%d",&b);
    printf("after swapping the variables\n");
    c=a;
    a=b;
    b=c;
    printf("the value of a is%d\n",a);
    printf("the value of b is%d\n",b);
    return 0 ;
}