#include<iostream>
using namespace std ;
int pow(int x,int n )
{
    int i=0,bin,ans=1;
    while (n>0)
    {
        bin = n%2;
        if (bin ==1)
        {
            ans = ans * x ;
        }
        x=x*x;
        n=n/2;
        i=i+1;
    }
    return ans ;
}
int main()
{
    int x,n ;
    cout << "the number x is ";
    cin >> x;
    cout << "the number n is ";
    cin >> n;
    int a=pow(x,n);
    cout << a ;
    return 0;
}