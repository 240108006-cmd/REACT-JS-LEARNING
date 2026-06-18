#include<stdio.h>
#include<math.h>
int main()
{
    int P,R,T;
    printf("the principal is ");
    scanf("%d",&P);
    printf("the rate is ");
    scanf("%d",&R);
    printf("the time is ");
    scanf("%d",&T);
    printf("the simple interest will be%d\n",(P*R*T)/100);
    printf("THE COMPOUND INTEREST WILL BE%d\n",P*((int)pow((1+ R / 100),T)));
    return 0 ;
}