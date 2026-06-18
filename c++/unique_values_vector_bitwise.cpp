#include<iostream>
#include <vector>
using namespace std;
int main ()
{
    vector <int>  vec={1,2,1,2,3};
    int size = vec.size();
    int unique = 0;
    for (int x=0;x<=size-1;x=x+1 )
    {
        unique=unique^vec[x];
    }
    cout << "the unique value in vector is ";
    cout << unique ;
    return  0;
}