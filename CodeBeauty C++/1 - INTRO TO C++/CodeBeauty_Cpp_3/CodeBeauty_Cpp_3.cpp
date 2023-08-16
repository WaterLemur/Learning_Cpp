// C++ FOR BEGINNERS (2020) - ASCII Table, 
// Program for ciphering text PROGRAMMING TUTORIAL
#include <iostream>

using std::cout;
using std::endl;

using std::cin;

int main()
{
    /*
    cout << "ASCII values\n";
    cout << "(int)a: " << (int)'a' << endl;
    cout << "int(a): " << int('a') << endl;
    cout << "int(A): " << int('A') << endl 
         << endl << endl;

    cout << char(65) << endl;
    */
    //          h   e   l   l   o
//EXERCISE 104 101 108 108 111
    char c1, c2, c3, c4, c5;
    cout << "Enter 5 letters: ";
    cin >> c1 >> c2 >> c3 >> c4 >> c5;
    cout << "ASCII message: " << int(c1) << " " << int(c2)
         << " " << int(c3) << " " << int(c4) << " " << int(c5) << endl;

    int code[4];
    cout << "Enter code:\n";
    for (int i = 0; i < sizeof(code) / 4 ; i++)
    {
        cout << i << " : ";
        cin >> code[i];
        //cin.get(code[i], sizeof(code));
    }
    cout << "The code is: ";
    //cin.get(code, 10);
    for (int i = 0; i < sizeof(code) / 4; i++)
    {
        cout << char(code[i]);
    }
    cout << endl;

    return 0;
}