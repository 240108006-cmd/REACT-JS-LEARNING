#include<iostream>
using namespace std ;
int main()
{
    int n;
    cout<< "the number of rows are ";
    cin >> n ;
    for (int x =1;x<=n;x=x+1)
    {
        char ch= 'A';
        for (int y =1 ; y<=n;y=y+1)
        {
            cout << ch ;
            ch = ch+1;
        }
        cout << "\n";
    } 
    return 0;
}