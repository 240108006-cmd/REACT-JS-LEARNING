#include<iostream>
using namespace std ;
int main()
{
    int n ; 
    cout << "the number to which fibonacci series to be printed";
    cin >> n;
    if (n==1)
    {
        cout << "1";
    }
    if (n==2)
    {
        cout << "1 1";
    }
    else 
    {
        cout << "1 1";
        int i=1,sum,a=1,b=1;
        while (i<=n-2)
        {
            sum = a+b;
            cout << " " << sum;
            a=b;
            b= sum;
            i=i+1;
        }
    }
    return 0;
}