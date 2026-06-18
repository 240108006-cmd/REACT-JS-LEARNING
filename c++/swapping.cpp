#include<iostream>
using namespace std; 
int main()
{
    int a , b,c ;
    cout << "the value of a is ";
    cin >> a;
    cout << "the value of b is ";
    cin >> b;
    c=a;
    a=b;
    b=c;
    cout << "after swapping the numbers \n";
    cout << "the value of a is "<< a ;
    cout << "\nthe value of b is "<< b ;
    return 0;
}