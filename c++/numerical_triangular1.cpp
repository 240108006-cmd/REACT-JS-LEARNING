#include<iostream>
using namespace std ;
int main()
{
    int rows ; 
    cout<< "the rows are ";
    cin>> rows;
    for ( int x =1 ; x <= rows ; x=x+1)
    {
        for (int y = 1; y<=x;y=y+1)
        {
            cout<< y;
        }
        cout << "\n";
    }
    return 0;
}