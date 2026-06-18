#include <iostream>
using namespace std ;
int sum1(int x)
{
    int sum=0;
    for (int y=1;y<=x;y=y+1)
    {
        sum = sum+y;
    }
    return sum ;
}
int main()
{
    
    int n;
    cout << "the numbers to which sum to be print out";
    cin >> n;
    cout << sum1(n);
    return  0;
}