#include<stdio.h>
int min ( int p, int q )
{
    if ( p <= q )
    {
        return p ;
    }
    else
    {
        return q ;
    }
}
int hcf (int x , int y )
{
    int hcf ;
    for ( int p =1 ; p <= min (x,y) ; p=p +1)
    {
        if ( (x % p == 0) && (y %  p == 0) ) 
        {
            hcf = p;
        }      
    }
    return hcf  ;
}
int main()
{
    int a , b ; 
    printf("the value of a is ");
    scanf("%d",&a);
    printf("the value of b is ");
    scanf("%d",&b);
    int r = hcf(a,b);
    printf("the hcf of two numbers is %d",r);
    return 0 ;
}