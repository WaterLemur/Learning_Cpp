#include <iostream>
#include <fstream>
#include <string>

using namespace std;
using std::cout;
using std::string;

using std::fstream;
using std::ios;


void part1();
void part2();
int main()
{
    //part1();
    part2();


    system("pause>0");
}

void part1() {
    std::fstream myFile;
    myFile.open("saldina.txt", std::ios::out);//Write
    if (myFile.is_open()) {
        myFile << "Hello\n";
        myFile << "This is second line\n";
        myFile.close();
    }
    myFile.open("saldina.txt", ios::app);//append
    if (myFile.is_open()) {
        myFile << "Hello2\n";
        myFile.close();
    }
}
using namespace std;
void part2() {
    fstream myFile;
    myFile.open("saldina.txt", ios::in);
    if (myFile.is_open()) {
        string line;
        while (getline(myFile, line)) {
            cout << line << endl;
        }
        myFile.close();
    }
}