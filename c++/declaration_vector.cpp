#include <iostream>
#include <vector>
using namespace std ;
int main()
{
    vector <int> vec = {1,2,3,4,5};
    int size = vec.size(); //  size vector 
    cout << size <<"\n";

    vec.push_back(6); // pushing back the element 
    cout << "after pushing the element the new size is ";
    cout << vec.size() << "\n";

    vec.pop_back(); // pushing back the element
    cout << "after popping the element the new size is ";
    cout << vec.size() << "\n";

    cout << "the front value of vector is "; // printing front value of vector 
    cout << vec.front() << "\n";

    cout << "the back value of vector is "; // printing back value of vector 
    cout << vec.back() << "\n";

    cout << vec.at(3);
    
    return 0 ;
}