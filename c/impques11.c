#include <stdio.h>
int main()
{
    int x,evensum=0,oddsum=0;
    for (x=1;x<=100;x=x+1)
    {
        if (x%2==0)
        {
            evensum =evensum + x;
        }
        
        else if (x%2 != 0)
        {
            oddsum = oddsum + x ;
        }
        
        else
        {
            printf("break");
        }
        printf("the sum of all  even digits is %d",evensum);]
        printf("the sum of all odd digits %d ",oddsum);
    }
    return 0 ;
}