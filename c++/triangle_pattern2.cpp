#include<iostream>
using namespace std ;
int main()
{
    int n ;
    cout<< "the number of rows are ";
    cin >> n;
    for (int x =1 ; x<=n;x=x+1)
    {
        for (int y=x ; y>=1;y=y-1)
        {
            cout << y;
        }
        cout << "\n";
    }
    return 0 ;
}