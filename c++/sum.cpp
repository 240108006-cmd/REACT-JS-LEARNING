#include <iostream>
using namespace std ;
int sum (int x , int y)
{
    int plus=x+y;
    return plus;


}
int main()
{
    int a,b ;
    cout << "the a is ";
    cin >> a;
    cout << "the b is ";
    cin >> b;
    cout << sum(a,b);
    return 0;
}