#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = -n; j <= n; j++)
        {
            cout << "Hello";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "Hello";
        }
    }
    cout << "/n";
    return 0;
}