#include<stdio.h>
int main()
{
    int n ; 
    printf("the number of rows are ");
    scanf("%d",&n);
    for (int x =1 ; x<= n ; x = x+1)
    {
        if (x <= n/2 +1)
        {
            for(int y =1 ; y <= n/2 +1 - x ; y=y+1)
            {
                printf(" ");
            }
            for (int z =1 ; z<= x ; z=z+1)
            {
                printf("*");
            }
            if (x>1)
            {
                for (int a = 1 ; a <= x -1 ; a =a+1)
                {
                    printf("*");
                }
                printf("\n");
            }

        }
        else 
        {
            for (int b = 1 ;b <= x-(n/2+1) ;b=b+1)
            {
                printf(" ");
            }
            for ( int c = n+1-x ; c>= 1; c = c -1)
            {
                printf("*");
            }
            for( int d = n- x ; d >= 1 ; d=d-1)
            {
                printf("*");
            }
            printf("\n");
        }
    }




    return 0 ;
}