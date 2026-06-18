#include<stdio.h>
int main()
{
    int n ;
    printf("the number is ");
    scanf("%d",&n);
    for (int x=1;x<=n;x=x+1)
    {
        for (int y=1;y<=x;y=y+1)
        {
            printf("%d",y);
        }
        printf("\n");
    }




    return 0 ;
}