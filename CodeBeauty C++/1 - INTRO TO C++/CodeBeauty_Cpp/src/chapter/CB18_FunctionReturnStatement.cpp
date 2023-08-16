/*
// Default
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

float number = 18;
char chapter[] = "Function return statement";
int amountOfPrimers = 0;

bool isPrimeNumber(int number)
{
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}
void part1()
{
    int number;
    cout << "   Number: ";
    cin >> number;

    bool isPrimeFlag = isPrimeNumber(number);
    if (isPrimeFlag)
    {
        cprintl("Prime number");
    }
    else
    {
        cprintl("Not prime number");
    }
}
void part2()
{
    for (int i = 1; i <= 100000; i++)
    {
        bool isPrime = isPrimeNumber(i);
        if (isPrime)
        {
            cout << "   " << i << " is prime number\n";
            amountOfPrimers++;
        }
    }
}

int main()
{
    _default();


    //part1();
    part2();
    cout << "\n   The amount of primers is: "
         << amountOfPrimers << endl;

    cprintl("\n   Thanks. Bye!");

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