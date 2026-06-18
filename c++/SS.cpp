#include<iostream>
#include<climits>
using namespace std ;
int main()
{
    int arr[]={1,1,1,2,2,3,3,3,3,33,3,3};
    int size = sizeof(arr)/sizeof(int );
    int b;
    int max= INT_MIN;
    int index;
    for (int x=0 ; x<=size-1; x=x+1)
    {
        int count = 0;
        int y;
        for (y=0;y<=size-1;y=y+1)
        {
            if (arr[x]==arr[y])
            {
                break;
            }
        }
        if (x==y)
        {
            b=arr[x];
            for (int z=0;z<=size-1;z=z+1)
            {
                if (b == arr[z])
                {
                    count=count+1;
                    if(count > max)
                    {
                        max=count ;
                        index = x ;
                        
                    }
                }
            }
            
        }
    }
    cout<< "the value that is appearing the maximum time is " << arr[index];
    return  0;
}