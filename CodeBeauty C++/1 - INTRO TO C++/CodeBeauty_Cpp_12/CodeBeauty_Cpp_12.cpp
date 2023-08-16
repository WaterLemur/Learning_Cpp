// What is while loop, 
// How to count digits of a number
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int number;
    cout << "Number: ";
    cin >> number;

    if (number == 0)
    {
        cout << "You have entered 0." << endl;
    }
    else
    {
        if (number < 0)
        {
            number = -1 * number;
        }
        int counter = 0;
        while (number > 0)
        {
            //number = number / 10;
            number /= 10;
            counter++;
        }
        cout << "Number contains " << counter << " digits\n";
    }

    cout << "Thanks. Bye!" << endl;
    system("pause>0");
}