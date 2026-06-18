#include <stdio.h>
int main()
{
    int x,i;
    printf("the value of x is ");
    scanf("%d",&x);
    i=1;
    while(i<=x)
    {
        printf("%d",i);
        i=i+1;
    }
    return 0 ;
}