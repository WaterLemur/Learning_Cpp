// Nested if/else, 
// Determine the type of a triangle PROGRAMMING TUTORIAL

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    cout << "Enter triangle edge size:\n";
    float a, b, c;
    cin >> a >> b >> c;
    cout << "The triangle is: ";
    if (a == b && b == c)
    {
        cout << "EQUILATERAL!";
    }
    else
    {
        if ((a != b) && (a != c) && (b != c))
        {
            cout << "SCALENE";
        }
        else 
        {
            cout << "ISOSCELES";
        }
    }
    cout << endl << "Thanks. Bye!" << endl;
    return 0;
}
