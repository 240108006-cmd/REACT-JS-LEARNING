#include<stdio.h>
int main()
{
    int n ; 
    printf("the number of rows ");
    scanf("%d",&n);
    for (int x = 65 ; x <=64+ n ; x = x+1 )
    {
        for (int y = 65;  y<= 122 - x; y = y +1)
        {
            printf("%c",(char)y);
        }
        for(int z = 1;z<= x ; z=z +1 )
        {
            printf("#");
        }
        if ( x > 65)
        {
            for (int a = 65 ; a<= x -1 ; a = a +1 )
            {
                printf("#");
            }
        }
        for (int j =  x+ 4  ;j <= 71; j = j +1)
        {
            printf("%c",(char)j);
        }
        printf("\n");
    }
    return  0 ;
}