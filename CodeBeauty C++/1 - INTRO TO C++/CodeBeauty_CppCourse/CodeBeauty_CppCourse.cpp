// https://www.youtube.com/watch?v=solufpKPDwY&list=PL43pGnjiVwgQHLPnuH9ch-LhZdwckM8Tq&index=2
// #2
#include <iostream>

using std::cout;
using std::cin;
using std::endl;


int main()
{
    cout << "C++ FOR BEGINNERS (2020) - Variables, Data Types,";
    cout << "Overflow, Sizeof PROGRAMMING TUTORIAL";
    cout << endl << endl;

    /*
    float annualSalary;
    cout << "Please enter your annual salary! ";
    cin >> annualSalary;
    float monthlySalary = annualSalary / 12;
    cout << "Your monthly salary is " << monthlySalary;
    cout << "\nIn 10 years you will earn: $"
         << annualSalary * 10 << endl << endl;

    int yearOfBirth = 1995;
    char character = 'a';
    bool isOlderThan18 = true;
    float averageGrade = 4.5;
    double balance = 45678945856;

    cout << "\nDATA TYPES\n";
    cout << "Size of int is " << sizeof(int) << " bytes\n";
    //-1,-2,-3,...,-2147483648
    cout << "Int min value is " << INT_MIN << endl;
    //0,+1,+2,+3,...,+2147483647
    cout << "Int max value is " << INT_MAX << endl;
    cout << "Size of unsigned int is: " << sizeof(unsigned int) << "bytes\n";
    cout << "Uint max value us " << UINT_MAX << endl;
    cout << "Size of bool is " << sizeof(bool) << " bytes\n";
    cout << "Size of char is " << sizeof(char) << " bytes\n";
    cout << "Size of float is " << sizeof(float) << " bytes\n";
    cout << "Size of double is " << sizeof(double) << " bytes\n";
    */

    int intMax = INT_MAX;
    cout << intMax << endl;
    cout << intMax + 1 << endl;
    return 0;
}