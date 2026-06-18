#include <iostream>
using namespace std ;
int main()
{
    int arr[]={1,2,3,1,5,1,6,1,3};
    int size = sizeof(arr)/sizeof(int);
    for (int x=0;x<=size-1;x=x+1)
    {
        int y;
        for( y=0;y<=x-1;y=y+1)
        {
            if (arr[x]==arr[y])
            {
                break;
            }
        }
        if (x==y)
        {
            cout << arr[x] << "\n";
        }
    }

    return  0;
}

