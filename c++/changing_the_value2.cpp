#include<iostream>
using namespace std ;
void change(int marks[],int len)
{
    for(int x=0;x<=len-1;x=x+1)
    {
        marks[x]=marks[x]*2;
    }
}
int main()
{
    int marks[5]={80,81,82,83,84};
    int len = sizeof(marks)/sizeof(int);
    change(marks,len);
    for(int j=0;j<=len-1;j=j+1)
    {
        cout << marks[j] << "\n";
    }
    return 0;
}