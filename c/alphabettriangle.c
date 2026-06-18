#include<stdio.h>
int main()
{
    int n ;
    printf("the number is ");
    scanf("%d",&n);
    for (int x = 65; x <=64+n; x =x+1)
    {
        for (int y =65; y <=x ; y=y+1)
        {
            printf(" %c",(char)y);
        }
        printf("\n");
    }
    return 0 ;
}