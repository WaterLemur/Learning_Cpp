// 15 - For loop, 
// How to calculate factorial of a number
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int number = 0;

    while (number < 1)
    {
        system("cls");
        cout << "Number: ";
        cin >> number;
    }
    int factorial = 1;

    /*
    for (int i =1; i<= number; i++)
    {
        factorial = factorial * i;
    }
    */
    for (int i = number; i > 1; i--)
    {
        factorial = factorial * i;
    }
    cout << number << " != " << factorial;

    cout << endl << endl << "Thanks. Bye!";
    system("pause>0");
}