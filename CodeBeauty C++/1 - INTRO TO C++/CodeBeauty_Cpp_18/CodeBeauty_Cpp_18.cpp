// 18 - What is nested for loop, 
// How to Multiplication table
#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int height;
    int width;
    cout << "Height: ";
    cin >> height;
    cout << "Width: ";
    cin >> width;
    char symbol;
    cout << "Symbol: ";
    cin >> symbol;

    for (int h = 0; h < height; h++)
    {
        for (int w = 0; w < width; w++)
        {
            cout << std::setw(3) << symbol;
        }
        cout << endl;
    }

    cout << endl << endl << "Thanks. Bye!";
    system("pause>0");
}