#include <iostream>
using namespace std;
void printhello()
{
    cout << "hello \n";
    return ;
}
int main ()
{
    int n ;
    cout << "the number of times to print hello ";
    cin >> n;
    for (int x=1;x<=n;x=x+1)
    {
        printhello();
    }
    return 0;
}