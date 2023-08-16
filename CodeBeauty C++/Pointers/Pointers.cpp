#include <iostream>

int main()
{
    int x = 4;

    int* pX = &x;

    int y = *pX;

    std::cout << "Hello World!\n";
}