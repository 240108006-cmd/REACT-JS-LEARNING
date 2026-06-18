#include<stdio.h>
int main()
{
    int n ;
    printf("the number of rows are ");
    scanf("%d",&n);
    for (int x=65;x<=64+n;x=x+1)
    {
        if (x%2==0)
        {
            for(int y = 65;y<=x;y=y+1)
            {
                printf(" %c",(char)y);
            }
            printf("\n");
        }
        else 
        {
            for(int z= 1;z<=x-64;z=z+1)
            {
                printf(" %d",z);
            }
            printf("\n");
        }     
    }
    return 0 ;
}