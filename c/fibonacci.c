#include<stdio.h>
int main()
{
    int a=1,b=1,sum,n ;
    printf("the n is ");
    scanf("%d",&n);
    for (int x = 1;x<=n-2;x=x+1)
    {
        sum= a+b;
        a=b;
        b=sum;
        printf("%d",sum);
    }
    
    return 0 ;
}