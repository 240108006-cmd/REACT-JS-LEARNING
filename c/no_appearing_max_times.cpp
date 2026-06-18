#include<iostream>
#include<climits>
using namespace std ;
int main()
{
    int arr[]={1,1,1,2,2,3};
    int size = sizeof(arr)/sizeof(int);
    int index ;
    int max_count= INT_MIN;
    for (int x=0 ; x<=size-1;x=x+1)
    {
        int count=0;
        int y;
        for (y=0 ; y<=x;y=y+1)
        {
            if (arr[x]==arr[y])
            {
                break;
            }
        }
        if (x==y)
        {
            int b = arr[x];
            for (int z=0;z<=size-1;z=z+1)
            {
                if (b==arr[z])
                {
                    count=count+1;
                    if (count>max_count)
                    {
                        max_count=count;
                        index= x;
                    }
                }
            }

        }
    }
    cout << "the number which is appearing maximum times is " << arr[index];
    return 0 ;
}