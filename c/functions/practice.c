#include<stdio.h>
int sum ( int x , int y)
{
    return x+y ;
}
int product( int p , int r )
{
    return p*r ;
}
int main()
{
    int a, b, c;
    float q ;
    printf ("the value of a is ");
    scanf("%d",&a);
    printf ("the value of b is ");
    scanf("%d",&b);
    printf ("the value of c is ");
    scanf("%d",&c);
    q = ((sum(a,b)*sum(b,c))+ product(b,c))/( product(a,c)+product(b,c));
    printf("%f",q);
    return 0 ;
}