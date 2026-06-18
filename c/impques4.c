#include<stdio.h>
int main()
{
    int a ,i;
    printf("the value is ");
    scanf("%d",&a);
    for (i=1;i<=10;i=i+1)
    {
        printf("%d\n",a*i);
    }
    return 0 ;
}