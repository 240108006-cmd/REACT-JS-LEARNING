#include<stdio.h>
int main()
{
    int n ; 
    printf("the number of rows are ");
    scanf("%d",&n);
    for (int x = 1 ; x <= n ;x = x +1 )
    {
        for ( int y= 1 ; y <= n +1- x ; y = y +1 )
        {
            printf("*");
        }
        if ( x > 1 )
        {
            for ( int z =1 ; z <= x-1; z = z +1 )
            {
                printf(" ");
            }
        }
        if ( x > 2)
        {
            for ( int a = 1 ; a <= x -2 ; a = a + 1)
            {
                printf( " ");
            }
        }
        if ( x > 1 )
        {
            for ( int b = 1 ; b <= n +1 - x ; b = b +1 )
            {
                printf("*");
            }
            printf("\n");
        }
       
    }
    return 0 ;
}