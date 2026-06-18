#include<iostream>
using namespace std ;
int main()
{
    int n ;
    cout << "the number of rows are ";
    cin >> n ;
    int a=1;
    for (int x=1;x<=n;x=x+1)
    {
        for (int y=1 ; y<=n;y=y+1)
        {
            cout<< a << " ";
            a=a+1;
        }
        cout << "\n";
    }

    return  0; 
}