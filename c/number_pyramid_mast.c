#include<stdio.h>
int main()
{
    int n ; 
    printf("the number of rows are ");
    scanf("%d",&n);
    for ( int x = 65 ; x <=64+n; x = x+1)
    {
        for ( int y = 1 ; y <=68-x; y=y+1)
        {
            printf(" ");
        }
        for(int z =65; z <=x;z=z+1)
        {
            printf("%c",(char)z);
        }
        if (x>65)
        {
            for (int a = x -1 ;a >= 65 ;a=a-1)
            {
                printf("%c",(char)a);
            }
        }
        
        printf("\n");
    }
    return 0 ;
}