#include<iostream>
#include<climits>
using namespace std ;
int main()
{
    int arr[]={155,33,11,66,99,212,33};
    int size= sizeof(arr)/sizeof(int);
    int maximum_sum = INT_MIN;
    int a ;
    int b ;
    for (int x=0;x<=size-1;x=x+1)
    {
        int currentsum = 0;
        for (int y=0;y<=size-1;y=y+1)
        {
            currentsum = currentsum + arr[y];
            if (currentsum > maximum_sum)
            {
                maximum_sum = currentsum;
                a = x;
                b = y;
            }
        }
    }
    cout << "maximum sum is " << maximum_sum << "\n";
    for(int z=a ; z<=b;z=z+1)
    {
        cout << arr[z] << "\n";
    }
    return  0;
}