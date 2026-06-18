# include <stdio.h>
int main()
{
    int n,x,sum=0;
    printf("the n is ");
    scanf("%d",&n);
    for (int x=1;x<=n;x=x+1)
    {
        if (x%2==0)
        {
            sum =sum - x ;
        }
        else 
        {
            sum = sum + x;
        }
    }
    printf("the sum is %d\n",sum);
    return 0 ;
}
