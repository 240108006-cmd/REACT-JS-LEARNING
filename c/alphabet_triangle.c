#include <stdio.h>
int main()
{
    int n ; 
    printf("the number of rows are ");
    scanf ("%d",& n);
    for(int x = 65 ; x<=64+n; x= x+1 )
    {
        for (int y =1; y <= 64+ n - x ; y=y+1 )
        {
            printf(" ");
        }
        for ( int z = 65 ; z <= x ; z=z+1)
        {
            printf("%c",(char)z);
        }
        printf("\n");

    }



    return 0 ;
}