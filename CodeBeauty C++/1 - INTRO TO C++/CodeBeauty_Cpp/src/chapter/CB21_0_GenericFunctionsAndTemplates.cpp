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

float number = 21.1;
char chapter[] = "Generic functions and templates";


template<typename T> //template<class T>
void Swap(T& a, T& b){
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    _default();


    int a = 5, b = 7;
    cout << "   " << a << " - " << b << endl;
    Swap<int>(a, b);
    cout << "   " << a << " - " << b << endl;

    char c = 'c', d = 'd';
    cout << "   " << c << " - " << d << endl;
    Swap(c, d);
    cout << "   " << c << " - " << d << endl;

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