#include <iostream>
#include<climits>
using namespace std ;
int main()
{
    int marks[5]={80,81,82,83,84};
    int largest= INT_MAX;
    int smallest = INT_MIN;
    int len = sizeof(marks)/sizeof(int);
    for (int x=0;x<=len-1;x=x+1)
    {
        if (marks[x]< smallest)
        {
            smallest=marks[x];
        }
        if (marks[x]> largest)
        {
            largest = marks[x];
        }
    }
    cout << "the smallest value in array is \n"<< smallest;
    cout << "the largest value in array is "<< largest;

    return 0;
}