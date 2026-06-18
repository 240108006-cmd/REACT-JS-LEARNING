#include<iostream>
using namespace std ;
int sum_of_n(int x)
{
    int sum=0 ;
    int i=1;
    while (i)
    {
        int digit;
        digit=x%10;
        sum=sum+digit;
        x=x/10;
        i=i+1;
    }
    return sum ;
}
int main()
{
    int n ;
    cout<< "the number is";
    cin>> n;
    cout << sum_of_n(n);
    return 0;
}