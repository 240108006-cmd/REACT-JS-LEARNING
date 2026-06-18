#include<stdio.h>
int main()
{
    int n ;
    printf("the n is ");
    scanf("%d",&n);
    for (int x = 1; x<=n;x=x+1)
    {
        for (int y=1;y<=((2*x) - 1);y=y+1)
        {
            if (y%2 != 0)
            {
                printf("%d",y);
            }
        }
        printf("\n");
    }



    return 0 ;
}