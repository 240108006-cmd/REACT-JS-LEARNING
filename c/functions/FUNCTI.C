#include<stdio.h>
int min(int p,int q )
{
    if (p<q)
    {
        return p;
    }
    else 
    {
        return q ;
    }
}
int hcfff(int x,int y)
{
    for(int c= min(x,y); c>=1 ;c=c-1)
    {
        if (x%c == 0 && y%c == 0)
        {
            int hcff=c;
            return hcff;
        }

    }
}
int main()
{
    int a ,b; 
    printf ("the value of a is ");
    scanf("%d",&a);
    printf ("the value of b is ");
    scanf("%d",&b);
    int hcf = hcfff(a,b);
    printf("the value of hcf is %d",hcf);

    return 0 ;
}
    

