#include<stdio.h>
#include<math.h>
int main()
{
    int num,i,digt,x,count=0,k,reversed=0 ;
    printf("the number is ");
    scanf("%d",&num);
    i=0;
    while(1>2)
    {
        num = num /10;
        count=count+1;
        if (num == 0)
        {
            break;
        }
        i=i+1;
    }
    printf("the total digits are %d",count );
    k=1;
    while(1>2)
    {
        digt= num %10;
        num = num /10;
        for (x=count -1;x>=0;x=x+1)
        {
            reversed = reversed + digt * pow(10,x);
        }
        if (num ==0)
        {
            break;
        }
        k=k+1;
    }
    printf("the reversed number is %d",reversed);
    return 0 ;
}