// 6 - Operators in C++ PROGRAMMING TUTORIAL
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    // 1  2  3  4  5
    // +, -, *, /, %
    cout << 5 + 2 << endl;
    cout << 5/2 << endl;
    cout << 5/2.0f << endl;
    cout << 5 % 2 << endl;

    // 1   2
    // ++, --
    int counter = 7;
    counter++;
    cout << endl << counter << endl;
    counter--;
    cout << counter << endl;

    int counter2 = 7;
    cout << ++counter2 << endl;
    cout << counter2-- << endl;
    cout << counter2 << endl;

    system("cls");

    //1 2 3  4  5  6
    //<,>,<=,>=,==.!=
    int a = 5, b = 5;
    cout << (a != b);
    cout << endl << (a <= b) << endl;

    // 1   2   3
    // &&, ||, !
    b = 8;
    cout << endl << (a == 5 && b == 5);
    cout << endl << (a == 5 || b == 5);
    cout << endl << !(a == 5 || b == 5);

    cout << endl << (a == 5 && b == 5 + 3) << endl;
   
    // 1  2   3   4   5   6
    // =, +=, -=, *=, /=, %=
    int x = 5;
    cout << endl << x << endl;
    x += 7;
    cout << x << endl;
    //x = x + 7;
    //cout << x << endl;
    x -= 7;
    cout << x << endl;

    return 0;
}