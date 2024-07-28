#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 20, c = 30;

    cout << "Before swapping" << endl;
    cout << "a = " << a << ", b = " << b << ", c = "<< c << endl;

   a=a+b+c;
   b=a-(b+c);
   c=a-(b+c);
   a=a-(b+c);

    cout << "After swapping" << endl;
    cout << "a = " << a << ", b = " << b << ", c = "<< c <<endl;

    return 0;
}