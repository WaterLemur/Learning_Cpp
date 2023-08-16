// 16 - How to nest loops, 
// How to nest for and do-while loop
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int grade;
    int sum = 0;

    for (int i = 0; i < 3; i++)
    {
        do 
        {
            cout << "Enter grade " << i + 1 << ": ";
            cin >> grade;
        } while (grade < 1 || grade > 5);
        sum += grade;
    }
    cout << "Sum = " << sum << endl;
    cout << "Avg grade = " << (float)sum / 3 << endl;

    cout << endl << endl << "Thanks. Bye!";
    system("pause>0");
}