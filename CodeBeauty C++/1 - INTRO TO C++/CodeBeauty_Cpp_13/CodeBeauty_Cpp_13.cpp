// 13 - What is while loop, 
// How to reverse digits of a number

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int number;
    int reversedNumber = 0;

    cout << "Number: ";
    cin >> number;

    while(number != 0)
    {
        reversedNumber *= 10;
        int lastDigit = number % 10;
        reversedNumber += lastDigit;
        number /= 10;
    }
    cout << "Reversed: " << reversedNumber;

    cout << endl << "Thanks. Bye!" << endl;
    system("pause>0");
}