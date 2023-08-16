// 17 - What is nested for loop, 
// How to Multiplication table
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            cout << i << " * " << j << " = " << i * j << endl;
        }
        cout << endl;
    }

    cout << endl << endl << "Thanks. Bye!";
    system("pause>0");
}