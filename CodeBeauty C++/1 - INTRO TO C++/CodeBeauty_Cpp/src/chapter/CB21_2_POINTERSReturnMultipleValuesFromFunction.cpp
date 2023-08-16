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

float number = 21.2f;
char chapter[] = "Return multiple values from a function using POINTERS";

int getMin(int numbers[], int size) {
    int min = numbers[0];
    for (int i = 1; i < size; i++) {
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }
    return min;
}
int getMax(int numbers[], int size) {
    int max = numbers[0];
    for (int i = 1; i < size; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    return max;
}
void getMinAndMax(int numbers[], int size, int* min, int* max) {
    for (int i = 1; i < size; i++) {
        if (numbers[i] > *max) {
            *max = numbers[i];
        }
        if (numbers[i] < *min) {
            *min = numbers[i];
        }
    }
}
int main()
{
    _default();


    int numbers[5] = { 5,4,-2,29,6 };

    //cout << "   Min is: " << getMin(numbers, 5) << endl;
    //cout << "   Max is: " << getMax(numbers, 5) << endl;

    int min = numbers[0];
    int max = numbers[0];
    getMinAndMax(numbers, 5, &min, &max);
    cout << "   Min is: " << min << endl;
    cout << "   Max is: " << max << endl;


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