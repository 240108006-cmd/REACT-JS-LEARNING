#include <iostream>
using namespace std ;
int main()
{
    int rows ;
    cout<< "the rows are" ;
    cin >> rows ;
    for (int x =1 ; x <= rows ; x=x+1)
    {
        for (int y=1 ; y <=rows-x;y=y+1)
        {
            cout<< " ";
        }
        for (int z=1;z<=x;z=z+1)
        {
            cout<< z;
        }
        if (x>1)
        {
            for (int b=1;b<=x-1;b=b+1)
            {
                cout<< b;
            }
        }
        cout << "\n";
    }

    return 0 ;
}
