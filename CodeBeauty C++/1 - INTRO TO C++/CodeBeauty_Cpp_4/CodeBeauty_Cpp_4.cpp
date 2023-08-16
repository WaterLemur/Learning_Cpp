#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number % 2 == 0)
    {
        cout << "The number is even";
    }
    else
    {
        cout << "The number is odd";
    }

    cout << endl << "Thanks. Bye!" << endl;

    return 0;
}