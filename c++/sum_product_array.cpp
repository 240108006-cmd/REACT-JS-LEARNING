#include <iostream>
using namespace std ; 
int sum (int arr[6],int size)
{
    int sum = 0;
    for (int x = 0;x<=size-1;x=x+1)
    {
        sum = sum + arr[x];
    }
    return sum ;
}
int product (int arr[6] , int size )
{
    int product =1 ;
    for (int y=0;y<=size-1;y=y+1)
    {
       product=product*arr[y];
    }
    cout << "\n";
    return product ;
}
int main ()
{
    int arr [6]={1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(int);
    cout << sum(arr,size);
    cout << product(arr,size);
    return 0;
}
