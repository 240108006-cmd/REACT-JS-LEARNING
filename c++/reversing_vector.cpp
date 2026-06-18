#include<iostream>
#include <vector>
using namespace std ;
void swapp( int &a,  int &b )
{
    int c = a;
    a=b ; 
    b=c ;
}
int main()
{
    vector <int> vec = {0,1,2,3,4};
    int size = vec.size();
    for (int x=0;x<=(size-1)/2;x=x+1)
    {
        swapp(vec[x],vec[size-1-x]);
    }
    for (int y=0;y<= size-1;y=y+1)
    {
        cout <<  vec[y];
    }
    return 0;
}