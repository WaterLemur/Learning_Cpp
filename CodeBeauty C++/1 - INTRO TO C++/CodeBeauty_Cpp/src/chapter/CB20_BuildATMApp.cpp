/*
* // Default
// Default
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

using std::string;

#define KMAG  "\x1B[35m"
#define KYEL  "\x1B[33m"
#define KWHT  "\x1B[37m"
#define KRED  "\x1B[31m"

void _default();
void info();
void title();

void cprint(string text);
void cprintl(string text);
void cprintm(string text);
void cprintml(string text);
void cred(string text);

float number = 20;
char chapter[] = "Build ATM app";


void showMenu()
{
    cout << "   *******MENU*******" << endl;
    cout << "   1. Check balance" << endl;
    cout << "   2. Deposit" << endl;
    cout << "   3. Withdraw" << endl;
    cout << "   4. Exit" << endl;
    cout << "   *******MENU*******" << endl;
}
int main()
{
    _default();


    //check balance, deposit, withdraw, show menu
    int option;
    double balance = 500;

    do 
    {
        showMenu();
        cout << "   Option: ";
        cin >> option;
        system("cls");
        switch (option)
        {
        case 1: cout << "   Balance is: " << balance << " $" << endl; break;
        case 2: cout << "   Deposit amount: ";
            double depositAmount;
            cin >> depositAmount;
            balance += depositAmount;
            break;
        case 3: cout << "   Withdraw amount: ";
            double withdrawAmount;
            cin >> withdrawAmount;
            if (withdrawAmount <= balance)
            {
                balance -= withdrawAmount;
            }
            else
            {
                cout << "   Not enough money" << endl;
            }
            break;
    }
    } while (option != 4);


    system("pause>0");
}





void _default()
{
    info();
    title();
}
void info()
{
    printf(KMAG);

    cout << endl;
    cout << " " << "CodeBeauty - "
        << "C++ FULL COURSE For Beginners "
        << "(Learn C++ in 10 hours)"
        << endl;
}
void title()
{
    printf(KYEL);

    cout << "  " << number << " - " << chapter;
    cout << endl << endl;

    printf(KWHT);
}
void cprint(string text)
{
    cout << "   " << text;
}
void cprintl(string text)
{
    cout << "   " << text;
    cout << endl;
}
void cprintm(string text)
{
    cout << text;
}
void cprintml(string text)
{
    cout << text;
    cout << endl;
}
void cred(string text)
{
    printf(KRED);
    cout << text;
    printf(KWHT);
}
*/