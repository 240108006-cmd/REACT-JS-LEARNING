#include<iostream>
#include <cmath>
using namespace std ;
int main()
{
    int n,r,sum=0;
    cout << "the number n is ";
    cin >> n;
    int i=0;
    while (n>0)
    {
        r=n%2;
        sum=sum+ r* pow (10,i) ;
        n=n/2;
        i=i+1;
       
    }
    cout << sum;
    return 0 ;
}