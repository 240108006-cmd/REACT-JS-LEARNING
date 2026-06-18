#include<stdio.h>
int main()
{
    int n ;
    printf("the value of n is ");
    scanf("%d",&n);
    for (int x = 1; x<= n; x=x+1)
    {
        for (int y = 65; y<= 64+n ; y=y+1)
        {
            printf(" %c", (char)y);
        }
        printf("\n");
    }
    return 0 ;
}