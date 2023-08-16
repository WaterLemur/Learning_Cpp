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

float number = 17;

void introduceMe(string name, string city ="default", int age = 0)
{
    cout << "My name is: " << name << endl;
    cout << "Im from: " << city << endl;
    if(age != 0)
    {
        cout << "I am: " << age << " years old" << endl;
    }
    cout << endl;
}
int main()
{
    _default();


    string name, city;
    int age;
    cout << "   Name: ";
    cin >> name;
    cout << "   City: ";
    cin >> city;
    cout << "   Age: ";
    cin >> age;
    introduceMe(name, city, age);

    //introduceMe("Saldina", "Mostar", 25);
    //introduceMe("Anna", "New York");

    system("pause>0");
}

void space(int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << " ";
    }
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

    cout << "  " << number << " - Functions whit "
         << "parameters/arguments (multiple and default)";
    cout << endl << endl;

    printf(KWHT);
}
*/