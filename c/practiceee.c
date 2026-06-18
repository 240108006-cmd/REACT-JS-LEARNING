#include<stdio.h>
int main()
{
    int n ; 
    printf("the nummber of rows are ");
    scanf("%d",&n);
    for ( int x =1 ; x <=n ; x = x +1 )
    {
        if (x %2 != 0 )
        {
            for( int y =1 ; y <= x ; y = y+1)
            {
                printf("%d",y);
            }
            printf("\n");
        }
        else
        {
            for ( int z = 1 ; z<=x;z=z+1)
            {
                printf("%c",(char)z+64);
            }
            printf("\n");
        }
        
    }
    return 0 ;
}