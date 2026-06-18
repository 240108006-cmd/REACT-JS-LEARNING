#include<stdio.h>
int main ()
{
    int n ;
    printf("the number of rows are ");
    scanf ("%d",&n);
    int a = 1;
    for (int x = 1 ; x <=n ; x =  x +1)
    {
        for (int y = 1; y<= x ; y=y+1)
        {
            printf(" %d",a);
            a=a+2;
        }
        printf("\n");
    }
    return 0 ;
}