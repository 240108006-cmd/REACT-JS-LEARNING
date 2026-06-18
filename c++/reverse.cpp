#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,dig,sum=0,count=0;
    cout << "the number n is ";
    cin >> n ;
    int k=0;
    while(n>0)
    {
        count=count+1;
        n=n/10;
        k=k+1;
    }
    cout<< "the number of digits "<< count;
    cout << "\nreenter number ";
    cin>> n;
    int i=0;
    while(n>0)
    {
        dig=n%10;
        sum=sum+dig*pow(10,count-1-i);
        n=n/10;
        i=i+1;
    }
    cout<< sum;
    return 0 ;
}