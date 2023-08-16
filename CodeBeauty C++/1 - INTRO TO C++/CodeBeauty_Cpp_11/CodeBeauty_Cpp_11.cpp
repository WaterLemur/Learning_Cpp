// 11 -  What is while loop, 
// What is infinite loop

#include <iostream>

using std::cout;

void main()
{
    int counter = 100;
    while (counter <= 500)
    {
        if (counter % 3 == 0 && counter % 5 == 0)
        {
            cout << counter << " is divisible\n";
        }
        counter++;
    }
    system("pause>0");
}