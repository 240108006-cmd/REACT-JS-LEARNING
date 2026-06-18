#include<stdio.h>
int main()
{
    int a,multiply=1;
    printf("the value of a is ");
    scanf("%d",&a);
    for (a;a>=1;a=a-1)
    {
        multiply = multiply *a;
        if (a== 1)
        {
             printf("%d\n",multiply);
        }
       
    }
    return 0 ;
}