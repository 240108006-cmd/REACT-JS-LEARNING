# include <stdio.h>
int main ()
{
    int n,x,count=0 ;
    printf("the number is ");
    scanf("%d",&n);
    for (x=1;x<=n;x=x+1)
    {
        if(n%x==0)
        {
            count = count +1 ;
        } 
    }
    if (count == 2)
    {
        printf("the number is prime ");
    }
    else
    {
        printf("the number is not prime");
    }
    return 0 ;
}