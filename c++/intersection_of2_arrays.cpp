#include<iostream>
using namespace std ;
int main()
{
    int arr1[]={1,2,5,1,2,5,5,9};
    int arr2[]={1,6,2,4,23,1,61,9};
    int size1=sizeof(arr1)/sizeof(int);
    int size2=sizeof(arr2)/sizeof(int);
    for(int x=0;x<=size1-1;x=x+1)
    {
        int y;
        for(y=0;y<=x-1;y=y+1)
        {
            if(arr1[x]==arr1[y])
            {
                break;
            }
        }
        if (y==x)
        {
            int b= arr1[x];
            for(int y=0;y<=size2-1;y=y+1)
            {
                if (arr2[y]==b)
                {
                    cout << b << "\n";
                    break;
                }
            }
        }
    }
    return 0 ;
}