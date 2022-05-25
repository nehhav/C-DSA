#include <iostream>
using namespace std;

int main()
{

    /* for (int i = 0; i <= 5; i++)
     {
         if (i == 2)
             break;
         cout << "Hello Neha" << endl;
     }
     cout << "Hi";
     */
    int c = 0;
    while (true)
    {
        cout << "Hello" << endl;
        if (c == 5) // Loop will stop terminating after c==5.
        {
            break; // To stop any condition prior we use break statement.
        }
        c++;
    }

    return 0;
}