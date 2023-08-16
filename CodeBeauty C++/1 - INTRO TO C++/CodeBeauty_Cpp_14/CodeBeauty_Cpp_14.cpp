// 14 - Do while loop, 
// Difference between while and do while
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int usersPin = 1234;
    int pin;
    int errorCounter = 0;

    do
    {
        cout << "PIN: ";
        cin >> pin;
        if (pin != usersPin)
        {
            errorCounter++;
        }
    } while (errorCounter<3 && pin!=usersPin);

    if (errorCounter < 3)
    {
        cout << "Loading...";
    }
    else
    {
        cout << "Blocked...";
    }

    cout << endl << endl << "Thanks. Bye!";
    system("pause>0");
}