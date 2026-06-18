#include<stdio.h>
int factorial(int a)
{
    int mul=1 ;
    for ( int  p = a ; p>=1 ; p=p-1)
    {
        mul=mul*p;
    }
    return mul;
}
int main()
{
    int n ; 
    printf("the number of rows are ");
    scanf("%d",&n);
    for (int x = 1 ; x <= n ; x = x +1)
    {
        for ( int z = 1; z<= n-x; z=z+1)
        {
            printf(" ");
        }
        for ( int y = 0 ; y <= x-1 ; y = y +1 )
        {
            printf ( "%d  ", factorial(x-1)/ (factorial(y)*factorial(x-1-y)));
        }
        printf("\n");
    }
    
    
    
    
    
    return  0 ;
}