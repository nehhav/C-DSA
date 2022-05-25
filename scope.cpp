#include <iostream>
using namespace std;
int x = 14;
int main()
{
    int x = 11;

    if (x % 3 == 2)
    {
        cout << "Hello" << (x + ::x) << "\n";
    }
    cout << x << "World";
    return 0;
}