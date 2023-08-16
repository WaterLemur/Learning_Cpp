// 19- How to draw triangle and inverted/reversed triangle

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int length;
    cout << "Length: ";
    cin >> length;
    char symbol;
    cout << "Symsbol: ";
    cin >> symbol;

    cout << endl;
    for (int i = 1; i <= length; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << std::setw(2) << symbol;
        }
        cout << endl;
    }
    cout << endl << endl;
    for (int i = length; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << std::setw(2) << symbol;
        }
        cout << endl;
    }

    cout << endl << endl << "Thanks. Bye!";
    system("pause>0");
}