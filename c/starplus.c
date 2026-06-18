#include<stdio.h>
int main()
{
    int n ; 
    printf("the no of rows are ");
    scanf("%d",&n);
    for (int x =1;x<= n;x=x+1)
    {
        for (int y =1;y<=n;y=y+1)
        {
            if (y==(n+1)/2 || x==(n+1)/2)
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