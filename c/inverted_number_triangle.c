#include<stdio.h>
int main()
{
    int n ;
    printf("the number of rows are ");
    scanf("%d",&n);
    for (int x=n;x>=1;x=x-1)
    {
        for (int y =1 ; y<=x;y=y+1)
        {
            printf("%d",y);
        }
        printf("\n");
    }
    return 0 ;
}