#include<iostream>
using namespace std  ;
int main()
{
    int rows;
    cout<< "the rows are ";
    cin >> rows;
    for (int x =1 ; x<=rows;x=x+1)
    {
        for (int y=1;y<=2*(rows-1);y=y+1)
        {
            if ((x+y)%2 == 0)
            {
                cout << "1" ;
            }
            else 
            {
                cout<< "2";
            }
        }
        cout << "\n";
    }
    return 0 ;
}