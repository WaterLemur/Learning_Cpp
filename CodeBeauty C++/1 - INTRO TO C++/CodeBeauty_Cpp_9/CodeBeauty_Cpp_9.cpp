// 9 - Ternary (Conditional) operator, 
// How to Guessing game PROGRAMMING TUTORIAL
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    /*
    int hostUserNumber;
    int guestUserNumber;
    cout << "Host: ";
    cin >> hostUserNumber;
    system("cls");
    cout << "Guest: ";
    cin >> guestUserNumber;

    cout << endl;

    (hostUserNumber == guestUserNumber)? cout << "Correct!" : cout << "Failed!";
    
    if (hostUserNumber == guestUserNumber)
    {
        cout << "Correct!";
    }
    else
    {
        cout << "Failed!";
    }
    */
    int hostUserNumber;
    int guestUserNumber;
    int tryCounter = 0;
    cout << "Host: ";
    cin >> hostUserNumber;
    system("cls");

    cout << "Guest: ";
    cin >> guestUserNumber;
    while (hostUserNumber != guestUserNumber)
    {
        cout << "Try again :c" << endl;

        tryCounter++;
        cout << endl <<"Enter your guess:";
        cin >> guestUserNumber;  
    }
    cout << "You have WON!! in " << tryCounter 
         << " tries." << endl;

    cout << endl << "Thanks. Bye!" << endl;

    system("pause>0");
}