#include<iostream>
using namespace std ;
int main ()
{
    int marks[5]={80,81,82,83,84};
    int n;
    cout<<"the value of which index number has to be find ";
    cin >> n;
    int len= sizeof(marks)/sizeof(int);
    for(int x=0;x<=len-1;x=x+1)
    {
        if (n==marks[x])
        {
            cout << x;
        }
        if (n!=0)
        {
            
        }
    }
    return  0;
}