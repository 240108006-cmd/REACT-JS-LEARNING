#include<iostream>
using namespace std;
int main() {
    int n1, n2;
    cout << "Enter the value of n1: ";
    cin >> n1;
    cout << "Enter the value of n2: ";
    cin >> n2;
    for (int x = n1 ; ; x=x+n1)
    {
        if (x%n2 == 0)
        {
            cout<< "the first multiple of n1 and n2 is"<< x;
            break;
        }
    }

    return 0;
}

