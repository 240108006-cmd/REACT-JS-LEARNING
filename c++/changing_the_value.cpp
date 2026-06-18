#include<iostream>
using namespace std ;
int main()
{
    int marks[5]={80,81,82,83,84};
    int len=sizeof(marks)/sizeof(int);
    for(int x=0;x<=len-1;x=x+1)
    {
        marks[x]=marks[x]*2;
    }
    for(int x=0;x<=len-1;x=x+1)
    {
        cout<< marks[x]<< "\n";
    }


    return 0;
}