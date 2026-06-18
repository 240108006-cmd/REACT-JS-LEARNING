#include <iostream>
#include <cmath>
using namespace std ;
int main()
{
    signed int n;
    cout << "the number n is ";
    cin >> n;
    for (int x=1; ; x=x+1)
    {
        int b= pow(2,x);
        if (n==b)
        {
            cout << "the number is power of 2 ";
            break;
        } 
        if ( b > n)
        {
            cout << "the number is not in the power of 2 ";
            break;
        }      
    }
    return 0;
}