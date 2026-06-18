#include<iostream>
using namespace std ;
int main ()
{
    int arr[]={2,7,11,15};
    int size = sizeof(arr)/sizeof(int);
    int targetsum = 26;
    int a,b;
    for (int x= 0 ;x<=size-1;x=x+1)
    {
        int currentsum = 0;
        int y;
        for (y= 0 ; y<=size-1 ; y=y+1 )
        {
            currentsum = currentsum + arr[x]+ arr[y];
            if (currentsum == targetsum)
            {
                a=x;
                b=y;
            }
            else
            {
                currentsum=0;
            }
        }
        
    }
    cout<< "the pair which is giving the sum as target sum is  " << arr[a] <<" and " << arr[b] ;
    return 0 ;
}