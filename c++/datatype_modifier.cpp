#include<iostream>
using namespace std ;
int main()
{
    cout << sizeof(int) << "\n";
    cout << sizeof(long int)<< "\n";
    cout << sizeof(long long int)<< "\n";
    cout << sizeof(int)<< "\n";
    signed int a;
    cout << "the signed means all integers including both +ve and -ve  is ";
    cin >> a;
    cout << a << "\n";
    // if a negative integer is inputed in unsigned variable then will output  any random number 
    unsigned int b;
    cout << "the unsigned means all integers including only +ve  is ";
    cin >> b;
    cout << b;
    return 0;
}