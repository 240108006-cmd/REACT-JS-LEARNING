#include<iostream>
using namespace std;
int main ()
{
    int n,sum=0 ;
    cout << "THE N IS ";
    cin>> n;
    int i=1;
    while(i<=n)
    {
        sum=sum+i;
        i=i+1;
    }
    cout << "the sum of n natural number is " << sum;



    return  0;
}