#include<stdio.h>
void swap(int *x,int *y)
{
    int c ; 
    c= *x;
    *x=*y;
    *y=c;
    return;
}
int main()
{
    int a,b ; 
    printf("the value of a is ");
    scanf("%d",&a);
    printf("the value of b is ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("after swapping of numbers \n");
    printf("%d\n",a);
    printf("%d\n",b);
    return 0 ;
}
// THERE ARE 3 WAYS TO SWAP THE VALUE OF 2 VARIABLES 
// 1) SIMPLY USE 3 VARIABLES 
// 2) SIMPLY USE 2 VARIABLES 
// 3) SIMPL USE 2 FUNCTIONS BY PASSING THE  ADDRESSES OF VARIABLES AS ARGUMENTS