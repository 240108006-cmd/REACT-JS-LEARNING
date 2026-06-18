#include <iostream>
using namespace std ; 
int main()
{
    int arr[]={1,2,1,2,1,3,1};
    int size=sizeof(arr)/sizeof(int);
    for (int x = 0 ; x<= size -1 ; x=x+1 )
    {
        int count = 0;
        int y ;
        for(y=0;y<=size -1 ; y=y+1 )
        {
            if (arr[x]==arr[y])
            {
                count=count +1 ;
            }
        }
        if (count == 1)
        {
            cout << arr[x];
        }
    }
    return  0;
}