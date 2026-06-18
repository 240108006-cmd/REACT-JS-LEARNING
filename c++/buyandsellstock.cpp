#include<iostream>
#include<climits>
using namespace std ; 
int main()
{
    int arr[]={7,1,5,3,6,4};
    int size = sizeof(arr)/sizeof(int);
    int difference ,buyindex,sellindex;
    int max = INT_MIN;
    for (int x=0;x<=size-1;x=x+1)
    {
        for (int y=0;y<=size-1;y=y+1)
        {
            difference = arr[x]-arr[y];
            if (difference > max )
            {
                max=difference ;
                buyindex=x;
                sellindex = y;
            }

        }
    }
    cout << "the maximum profit is " << max; 
    cout << "\nthe buy index " << buyindex; 
    cout << "\nthe sell index "<< sellindex ;
    return  0;
}