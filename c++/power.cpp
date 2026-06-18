#include<iostream>
using namespace std ;
int pow(int x, int n )
{
    int mul=1;
    for (int b=1;b<=n;b=b+1)
    {
        mul = mul*x;
    }
    return mul;
}
int main()
{
    int x, n ;
    cout << "the base number is ";
    cin >> x ;
    cout << "\n";
    cout << "the power number is " ;
    cin >> n ;
    cout << "\n";
    int result = pow(x,n);
    cout << "the result is " << result;
    return  0;
}