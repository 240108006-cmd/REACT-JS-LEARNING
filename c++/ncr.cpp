#include<iostream>
using namespace std ;
int factorial (int x)
{
    int fact=1;
    for (int z=1;z<=x;z=z+1)
    {
        fact=fact*z;
    }
    return fact;
}
int main()
{
    int n,r,ncr;
    cout << "the value of n is ";
    cin>> n;
    cout << "the value of r is ";
    cin>> r;
    ncr=factorial(n)/(factorial(r)*factorial(n-r));
    cout << ncr;
    return  0;
}