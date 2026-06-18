#include<stdio.h>
int main()
{
    int n ; 
    printf("the umber of rows are ");
    scanf("%d",&n);
    for (int x = 1 ; x <=n ; x = x +1 )
    {
        for (int y = 1 ; y <= n - x ; y = y+1)
        {
            printf(" ");
        }
        for (int z = 1 ; z<= x ; z= z +1 )
        {
            printf("*");
        }
        for (int a = 1 ; a <= n - x ; a = a+1)
        {
            printf("*");
        }
        for (int b = 1 ; b<= x ; b= b +1 )
        {
            printf(" ");
        }
        printf("\n");

    }
    return 0 ;
}