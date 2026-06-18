#include<iostream>
#include<climits>
using namespace std ;
int smallest_value(int arr[],int size )
{
    int smallest = INT_MAX;
    int v;
    for (int x=0;x<=size-1;x=x+1)
    {
        if (arr[x]< smallest) 
        {
            smallest = arr [x];
            v= x ;
        }   
    }
    return v;
}
int largest_value(int arr[],int size )
{
    int largest = INT_MIN;
    int r ;
    for (int y=0;y<=size-1;y=y+1)
    {
        if (arr[y]> largest) 
        {
            largest = arr [y];
            r=y;
        } 
        
    }
    return r;
}
void swap(int arr [],int size ,int b , int c)
{

    int temp= arr[b];
    arr[b]=arr[c];
    arr[c]=temp;
}
int main()
{
    int arr[5]={25,99,555,44,445};
    int size=sizeof(arr)/sizeof(int);
    int b=smallest_value(arr,size);
    cout<< b << "\n";
    int c=largest_value(arr,size);
    cout << c << "\n";
    swap(arr,size,b,c);
    cout << "after swapping the numbers \n";
    for (int z=0; z<=size-1;z=z+1)
    {
        cout << arr[z] << "\n";
    }
    return 0 ;
}
   