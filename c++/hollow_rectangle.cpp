#include<iostream>
using namespace std ;
int main()
{
    int n ;
    cout << "the number of rows are ";
    cin >> n;
    for (int x=1;x<=n;x=x+1)
    {
        for (int y=1;y<=n-x;y=y+1)
        {
            cout << " " ;
        }
        if (x+y == n+1)
    }

    return  0 ;
}
