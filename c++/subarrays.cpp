#include<iostream>
#include <climits>
using namespace std ;
int main()
{
    int arr[]={155,33,11,-66};
    int size= sizeof(arr)/sizeof(int );
    int max = INT_MIN;
    int starting;
    int end ;
    int sum ;
    for (int x= 0;x<=size-1;x=x+1)
    {
        int sum=0;
        for (int y=0;y<=size-1;y=y+1)
        {
            sum = sum + arr[y];
            if (sum > max )
            {
                max = sum ;
                starting = x ;
                end = y ;
            }
        } 
    }
    cout << "the maximum sum is "<< sum ;
    cout << "the starting point of the maximum aray is "<< starting << "and " << "the starting point of the maximum aray is " << end ;
    return  0;
}