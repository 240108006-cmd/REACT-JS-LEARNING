#include <stdio.h>
#include <math.h>
int main()
{
    int a , b ;
    printf("the value of a is ");
    scanf("%d",&a);
    printf("the value of b is ");
    scanf("%d",&b);
    printf("the value of a^b is %d", (int)pow(a,b) );
    return 0 ;
}