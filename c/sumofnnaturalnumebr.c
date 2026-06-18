#include<stdio.h>
int main()
{
    int n,x,sum = 0;
    printf("the number is ");
    scanf("%d",&n);
    for (x=1;x<=n;x=x+1)
    {
        sum=sum+x;
    }
    printf("the sum is %d\n",sum);
    return 0 ;
}