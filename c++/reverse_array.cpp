#include<iostream>
using namespace std ;
void  swap(int &a , int & b )
{
    int c=a;
    a=b;
    b=c;
    
}
int main ()
{
    int arr[6]={0,1,2,3,4,5};
    int size=6;
    for (int x =0 ;x<=(size-1)/2; x=x+1)
    {
         swap(arr[x],arr[size-1-x]);
    }
    for (int y=0 ; y<=size-1;y=y+1)
    {
        cout << arr[y] << "\n";
    }
    return  0;
}