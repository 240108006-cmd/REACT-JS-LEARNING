#include<iostream>
using namespace std ;
int pow(int x,int n )
{
    int bin,i=1,p=x,mul=1;
    while(n>0)
    {
        bin = n%2;
        if (bin ==1)
        {
            mul =mul* p;
            p=p*p;
        }
        else 
        {
            p=p*p;
        }
        n=n/2;
        i=i+1;
    }
    return mul ;
}
int main()
{
    int x=3,n=5;
    int result =pow(x,n);
    cout <<"the final result of power is "<< result;

    return 0 ;
}