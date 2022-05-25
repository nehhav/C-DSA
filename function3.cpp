/* Write a funtion to take lower case character as an input & returns upper-case
character as an output.
*/

#include <iostream>
using namespace std;

char lower_to_uppercase(char);

char lower_to_uppercase(char c)
{
    return (char)(c - 'a' + 'A');
}

int main()
{
    cout << lower_to_uppercase('d') << endl;
    return 0;
}