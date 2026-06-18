#include<stdio.h>
int main()
{
    int a,x,count=0 ;
    printf("the value is ");
    scanf("%d",&a);
    for (x=1;x<=a;x=x+1)
    {
        if (a%x==0)
        {
            count=count+1;
        }
    }
    if (count ==2)
    {
        printf("the number is prime \n");
    }
    else
    {
        printf("the number is not prime \n");
    }
    
    return 0 ;
}