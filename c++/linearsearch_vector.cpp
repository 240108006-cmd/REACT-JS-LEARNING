#include<iostream>
#include <vector>
using namespace std ;
int main()
{
    vector <int> vec = {1,2,1,2,3,455};
    int a ;
    cout << "the number of hwich index is to be find ";
    cin >> a;
    int size = vec.size();
    int x ;
    for(x=0; x<=size-1;x=x+1)
    {
        if (vec[x]==a)
        {
            cout << "the index of number a is " << x ;
        }
    }
    return 0;
}