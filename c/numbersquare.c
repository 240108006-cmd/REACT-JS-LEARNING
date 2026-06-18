#include<stdio.h>
int main()
{
    int n ;
    printf("the n is ");
    scanf("%d",&n);
    for (int y=1;y<=n;y=y+1)
    {
        for (int x = 1;x<=n;x=x+1)
        {
            printf("%d",x);
        }
        printf("\n");
    }
    return 0 ;
}