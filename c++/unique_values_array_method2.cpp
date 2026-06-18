#include<iostream>
using namespace std ;
int main()
{
    int arr[]={1,2,1,2,3};
    int size = sizeof(arr)/sizeof(int);
    int unique= 0;
    for(int x=0;x<=size-1;x=x+1)
    {
        unique=unique^arr[x];
    }
    cout << "the unique value is ";
    cout << unique ;
    return  0 ;
}
