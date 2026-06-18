#include<stdio.h>
int main ()
{
    int n,a ;
    printf("the number of rows are ");
    scanf ("%d",&n);
    for (int x = 1 ; x <=n ; x =  x +1)
    {
        if (x%2== 0)
        {
            a =0;
        }
        else 
        {
            a = 1;
        }
        for (int y = 1; y<=x ; y=y+1)
        {

            printf(" %d",a);
            if (a==1)
            {
                a=a-1;
            }
            else
            {
                a=a+1;
            }
        }
        printf("\n");
    }
    return 0 ;
}