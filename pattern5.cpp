#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int r = 1; r <= (n + 2) / 2; r++)
    {
        int counter = (n % 2 != 0);
        // print (n+2)/2-r spaces
        for (int i = 0; i < (n + 2) / 2 - r + 1; i++)
        {
            cout << "  ";
        }
        // print 2*r stars
        for (int i = 0; i < 2 * r - counter; i++)
        {
            cout << "* ";
        }
        // change line
        cout << "\n";
    }

    // for handling odd n
    if (n % 2 == 1)
    {
        for (int i = 0; i < n + 2; i++)
        {
            cout << "* ";
        }
        cout << "\n";
    }

    for (int r = (n + 2) / 2; r >= 1; r--)
    {
        int counter = (n % 2 != 0);
        // print (n+2)/2-r spaces
        for (int i = 0; i < (n + 2) / 2 - r + 1; i++)
        {
            cout << "  ";
        }
        // print 2*r stars
        for (int i = 0; i < 2 * r - counter; i++)
        {
            cout << "* ";
        }
        // change line
        cout << "\n";
    }

    return 0;
}