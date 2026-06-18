#include<iostream>
using namespace std ;
int main ()
{
    int a , b ;
    cout<< "the value of a is ";
    cin >> a;
    cout<< "the value of b is ";
    cin >> b;
    cout << a+b << "\n";
    cout << a-b << "\n";
    cout << a*b << "\n";
    cout << a/b<< "\n";
    cout << a%b << "\n";
    cout << a << "\n";
    cout << ++a << "\n";
    cout << --a << "\n" ;
    cout <<(a>b) << "\n" ;
    cout << (a<b) << "\n";
    cout << (a==b) << "\n";
    cout << (a!=b) << "\n";
    cout << ~(1001) << "\n";
    cout << (15&18) << "\n";
    cout << (11|15) << "\n";
    
    cout << (11^15) << "\n";


    return 0 ;
}