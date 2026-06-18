#include<iostream>
using namespace std ;
int main()
{
    int marks[5];
    int len=sizeof(marks)/sizeof(int);
    for(int x=0;x<=len-1;x=x+1)
    {
        cin>> marks[x];
    }
    for(int x=0;x<=len-1;x=x+1)
    {
        cout <<  marks[x] << "\n";
    }

    return 0 ;
}