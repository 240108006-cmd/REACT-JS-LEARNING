#include <iostream>
#include<cmath>
using namespace std ;
int main()
{
    int n,digit,sum=0 ;
    cout << "the binary number is ";
    cin >> n;
    int k=0;
    while(n>0)
    {
        digit=n%10;
        sum=sum+ digit*pow(2,k);
        n=n/10;
        k=k+1;
    }
    cout << "the decimal of binary number is"<< sum;

    return  0;
}
