#include<iostream>
using namespace std;
int main()
{
    cout<< (~23)<< "\n"; // BITWISE NOT
    cout<< (23&31)<< "\n"; // BITWISE AND 
    cout<< (23|31)<< "\n"; // BITWISE OR 
    cout<< (23 ^31)<< "\n"; // BITWISE XOR
    cout<< (50<< 2)<< "\n"; // LEFT SHIFT (a*(2^b))
    cout<< (50>>2)<< "\n"; // RIGHT SHIFT (a/(2^b))
    return 0 ;
}
// bitwise operator 
// * input in bracket 
// *decimal to binary to decimal