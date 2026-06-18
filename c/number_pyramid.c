#include<stdio.h>
int main()
{
    int n ; 
    printf("the number of rows are ");
    scanf("%d",&n);
    int b = 3;
    for ( int x =1 ; x <=n ; x = x +1 )
    {
        for ( int y =1 ; y <= n -x ; y= y +1)
        {
            printf(" ");
        }
        for(int z= 1 ; z<= x; z= z+1)
        {
            printf("%d",z);
        }
        if (x>1)
        {
            for (int a = 1; a <= x-1;a=a+1)
            {
                printf("%d",b);
                b=b+1;
            }
        }
        printf("\n");
    }
    return 0 ;
}