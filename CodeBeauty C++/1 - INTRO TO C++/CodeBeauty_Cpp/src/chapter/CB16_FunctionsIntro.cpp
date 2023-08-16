/*
// Introduction to Functions
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#define KMAG  "\x1B[35m"
#define KYEL  "\x1B[33m"
#define KWHT  "\x1B[37m"
#define KRED  "\x1B[31m"

void space(int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << " ";
    }
}
void def()
{
    printf(KMAG);

    cout << endl;
    space(1); cout << "CodeBeauty - "
    << "C++ FULL COURSE For Beginners "
    << "(Learn C++ in 10 hours)"
    << endl;

    printf(KYEL);
    space(2); cout << "16 - ";
    cout << "Introduction to Functions"
         << endl << endl;

    printf(KWHT);
}
void function()
{
    space(3); cout << "Hello from function()" << endl;
}

void declaredFunction();

int main()
{
    def();

    space(3); cout << "Hello Galaxy" << endl;
    function();
    declaredFunction();

    system("pause>0");
}

void declaredFunction() 
{
    cout << endl; space(3); cout << "This is a ";
    printf(KRED);
    cout << "DECLARED";
    printf(KWHT);
    cout << " function!";
}
*/