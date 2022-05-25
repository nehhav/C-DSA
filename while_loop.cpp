#include <iostream>
using namespace std;

int main()
{
    int n, count;
    cin >> n;

    for (count = 0; n != 0; n = n / 10)
    {
        cout << n << endl;
        count++;
    }
    cout << count << endl;

    return 0;
}