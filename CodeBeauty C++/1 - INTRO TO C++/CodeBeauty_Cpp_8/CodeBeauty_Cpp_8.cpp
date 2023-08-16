// 8 - Switch/case statement, Make Calculator application PROGRAMMING TUTORIAL
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void main()
{
    float num1;
    float num2;
    char operation;
    float output;
    cout << "**The best calculator EVER!**" << endl;
    cin >> num1 >> operation >> num2;
    cout << num1 << operation << num2 << " = ";
    switch (operation)
    {
        case '+':
            cout<< num1 + num2;
            break;
        case '-':
            cout<< num1 - num2;
            break;
        case '*':
            cout << num1 * num2;

        case '/':
            cout << num1 / num2;
            break;
        case '%':
            bool isNum1Int;
            bool isNum2Int;

            isNum1Int = (int)num1 == num1;
            isNum2Int = (int)num2 == num2;

            if (isNum1Int && isNum2Int)
            {
                cout << endl << num1 << operation << num2 << "=" 
                     << (int)num1 % (int)num2;
            }
            else
            {
                cout << endl << "Operation NOT VALID!";
            }
            break;

        default:
            cout << endl << "Y u try to hack me pal :'c";
    }
    cout << endl << "Thanks. Bye!" << endl;
}