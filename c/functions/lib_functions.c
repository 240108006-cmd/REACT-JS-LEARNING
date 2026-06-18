#include<stdio.h>
#include<math.h>
int main()
{
    int a,b; 
    printf("the number is ");
    scanf("%d",&a);
    printf("the power of number is ");
    scanf("%d",&b);
    printf("the square root of the number is %f\n",sqrt(a));
    printf("the power of the number is %f\n",pow(a,b));
    return 0 ;
}