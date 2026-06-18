#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<< "the number of rows are ";
    cin>> n;
    int rows2;
    cout << "the rows present in second part is ";
    cin >> rows2 ;
    for (int x=1;x<=n;x=x+1)
    {
        for (int y=1;y<=n-x;y=y+1)
        {
            cout << " ";
        }
        cout << "*";
        if (x>1)
        {
            for (int z=1;z<=x-1;z=z+1)
            {
                cout << " ";
            }
        }
        if (x>2)
        {
            for(int a=1;a<=x-2;a=a+1)
            {
                cout << " ";
            }
        }
        if (x>1)
        {
            cout << "*";
        }
        cout << "\n";
    }
    
    
    for(int b=1 ; b<=rows2 ; b=b+1)
    {
        for (int c=1 ; c<=b;c=c+1)
        {
            cout << " ";
        }
        cout << "*";
        if (b<rows2)
        {
            for (int d=1; d<=5-2*b ;d=d+1)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}