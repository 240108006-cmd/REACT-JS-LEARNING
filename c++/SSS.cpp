#include <iostream>
using namespace std ;
int main()
{
    int n ;
    cout << "the number of rows are ";
    cin >> n;
    for (int x=1;x<=n;x=x+1)
    {
        for (int y=1;y<=2*n-2;y=y+1)
        {
            if (int x=1 || x == n)
            {
                cout << y;
            }
            else if( int y=1 || y == 2*n -2)
            {
                cout << y;
            }
            else 
            {
                cout << " ";
            }
        }
    }
    return 0;
}