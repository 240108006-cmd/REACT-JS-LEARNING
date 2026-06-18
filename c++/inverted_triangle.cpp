#include<iostream>
using namespace std ;
int main()
{
    int n ;
    cout<< "the number of rows";
    cin >> n;
    for (int x =1;x<=n;x=x+1 )
    {
        for (int a =1;a<=x-1;a=a+1)
        {
            cout << " ";
        }

        for (int y=n+1-x ;y>=1 ;y=y-1)
        {
            cout << x;
        }
        cout << "\n";
    }

    return 0;
}