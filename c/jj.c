# include<stdio.h>
int main()
{
    int x,sum = 0,arr[5]={1,2,2,3,4};
    for(x=0;x<5;x=x+1)
    {
        sum=sum + arr[x];
    }
    printf("the avg is %f",sum/5);
    return 0 ;
}