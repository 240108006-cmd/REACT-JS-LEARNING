#include<stdio.h>
int main()
{
    int n ;
    printf("the number of rows are ");
    scanf("%d",&n);
    for(int y=1; y <= 2*n +1;y=y+1)
    {
        printf("%d",y);
    }
    printf("\n");
    for (int x =1; x<=n;x=x+1)
    {
        for(int y =1;y<=n+1-x;y=y+1)
        {
            printf("%d",y);
        }
        for(int z = 1;z<=x;z=z+1)
        {
            printf(" ");
        }
        if ( x >1)
        {
            for(int a =1;a<= x-1;a=a+1 )
            {
                printf(" ");
            }
        }
        for(int b=1 ; b <=n+1-x;b=b+1)
        {
            printf("%d",(2*n+1)/2 +1 +b);
        }

        printf("\n");
    }
    return 0 ;
}





