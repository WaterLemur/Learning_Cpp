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

float number = 19;
char chapter[] = "Function overload";

int sum(int a, int b);
double sum(double a, double b);
float sum(float a, float b, float c);

int main()
{
    _default();


    cout << "  " << sum(4, 3) << endl;
    cout << "  " << sum(4.4, 3.3) << endl;
    cout << "  " << sum(4.4, 3.3, 2.2) << endl;

    system("pause>0");
}

int sum(int a, int b)
{
    return a + b;
}
double sum(double a, double b)
{
    return a + b;
}
float sum(float a, float b, float c)
{
    return a + b + c;
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