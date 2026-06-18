#include<iostream>
using namespace std;
int main()
{
    int rows ;
    cout << "the number of rows are ";
    cin >> rows ;
    for (int x =1 ; x <= rows;x=x+1)
    {
        for (int y=1 ; y<=2*(rows-1);y=y+1)
        {
            if (x==1 || x== rows)
            {
                cout << y;
            }
            if (y==1||y == 2*(rows-1))
            {
                cout<< y;
            }
        }
        cout << "\n";
    }







    return 0 ;
}