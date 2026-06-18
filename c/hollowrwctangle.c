#include<stdio.h>
int main()
{
    int n ;
    printf("the number of rows are ");
    scanf("%d",&n);
    for (int x = 1 ; x<=n;x=x+1)
    {
        for (int y =1 ; y <= n + 2 ; y=y+1)
        {
            if (x==1 || x == n || y==1|| y == n +2)
            {
                printf("*");
            }
            else 
            {
                printf(" ");
            }
           
        }
        printf("\n");
    }
    return 0 ;
}