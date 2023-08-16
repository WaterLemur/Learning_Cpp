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

void printlane(string text);
void printstart(string text);
void printmid(string text);
void printend(string text);
void printred(string text);

float number = 22;
char chapter[] = "Recursion & recursive functions";

void part1(int* m,int* n) {
    int sum = 0;
    for (int i = *m;i <= *n;i++) {
        sum += i;
    }
    cout << "   Sum = " << sum;
}


int recursive_sum(int m, int n);

void part2(int* m, int* n) {
    cout << "   Sum = " << recursive_sum(*m, *n);
}

int recursive_sum(int m, int n) {//m=2, n=4
    if (m == n) {
        return m;
    }

    return m + recursive_sum(m + 1, n);// 2+(3+(4))  2+7=9
}

int main()
{
    _default();


    int m = 1, n = 552;
    //part1(&m, &n);
    part2(&m, &n);


    system("pause>0");
}




void space(int size) {
    for (int i = 0; i < size; i++) {
        cout << " ";
    }
}
void _default() {
    info();
    title();
}
void info() {
    printf(KMAG);

    cout << endl;
    space(1);
    cout << "CodeBeauty - "
        << "C++ FULL COURSE For Beginners "
        << "(Learn C++ in 10 hours)"
        << endl;
}
void title() {
    printf(KYEL);

    space(2);
    cout << number << " - " << chapter;
    cout << endl << endl;

    printf(KWHT);
}



void printlane(string text) {
    space(3);
    cout << "   " << text << endl;
}
void printstart(string text) {
    space(3);
    cout << "   " << text;
}
void printmid(string text) {
    cout << text;
}
void printend(string text) {
    cout << text << endl;
}

void printred(string text) {
    printf(KRED);
    cout << text;
    printf(KWHT);
}
*/