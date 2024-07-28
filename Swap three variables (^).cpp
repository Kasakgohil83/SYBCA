#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 10, c = 15;

    cout << "Before swapping" << endl;
    cout << "a = " << a << ", b = " << b << ", c = "<< c << endl;

   a=a^b^c;
   b=a^b^c;
   c=a^b^c;
   a=a^b^c;

    cout << "After swapping" << endl;
    cout << "a = " << a << ", b = " << b << ", c = "<< c <<endl;

    return 0;
}