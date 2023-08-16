#include <iostream>
#include <stdlib.h>
#include <string>

#include <fstream>
#include <cstring>


using std::cout;
using std::cin;
using std::endl;
using std::string;

using std::fstream;
using std::ios;

void errorHandler(string function, int e);

void intro();
void outro();

void mode();
void read();
void write();

void load();
bool save(int* values, int size);
void toInt(string text);
void toChar(string code);


string name = "Decimal to char file streamer";
float version = 0.1f;


int main()
{
    mode();

    outro();

    cin;
    system("pause>0");
}



void errorHandler(string function, int e) {
    try {
        cout << "Error " << endl;
        cout << "Function: " << function << endl;
        cout << "Exception: " << e << endl;
    }
    catch (int exception){
        cout << "Error" << endl 
             << "Function: errorHandler" << endl 
             << "Exception: " << exception;
    }
}
void space(int size) {
    try {
        for (int i = 0; i < size; i++)
        {
            cout << " ";
        }
    }
    catch(int exception){
        errorHandler("space", exception);
    }
}
void intro() {
    try {
        cout << endl;
        space(1);

        cout << name << " - v" << version << endl << endl;
    }
    catch (int exception) {
        errorHandler("intro", exception);
    }
}
void outro() {
    try {
        cout << endl;
        space(1);

        cout << "Thanks for using! program closing..." << endl;
        space(2);
    }
    catch (int exception) {
        errorHandler("outro", exception);
    }
}

void mode() {
    try {
        system("Color 0E");
        int mode;

        while (true) {
            intro();

            space(2); cout << "Convert mode:" << endl;
            space(2); cout << "1. Read" << endl;
            space(2); cout << "2. Write" << endl << endl;
            space(2); cin >> mode;

            if (mode == 1) {
                read();
                return;
            }
            else if (mode == 2) {
                write();
                return;
            }
        }
    }
    catch (int exception) {
        errorHandler("mode", exception);
    }
}
void read() {
    try {
        system("cls");
        system("Color 09");
        intro();
        space(2); cout << "-Read-" << endl;

        load();
    }
    catch (int exception) {
        errorHandler("read", exception);
    }
}
void load() {
    try {
        fstream file;
        string line;
        string code;

        file.open("Code.txt", ios::in);
        if (file.is_open()) {
            while (getline(file, line)) {
            }
            file.close();
            toChar(line);
            cin;
        }
        else
        {
            space(3);cout << "File not found!";
        }
    }
    catch (int exception) {
        errorHandler("load", exception);
    }
}
void toChar(string code) {
    try {
        int* numbers = new int[code.length()]{};
        string* letters = new string[code.length()]{};

        int index = 0;
        for (int i = 0; i < code.length(); i++)
        {
            switch (code[i]) {
            case ' ':
                index++;
                break;
            default:
                letters[index] += code[i];
            }
        }
        cout << (char)stoi(letters[1]) << endl << endl << endl << endl << endl;
        /*for (int i = 0; i<code.length(); i++) {
            numbers[i] = stoi(letters[i]);
        }*/
        cout << numbers[1] << endl << endl << endl << endl << endl;
        //int tmp = stoi(letters[0]);
        //cout << char(tmp) << char(stoi(letters[1])) << endl << endl << endl << endl << endl;

        space(3); cout << "This may work: ";
        for (int i = 0; i < code.length(); i++) {
            cout << (char)stoi(letters[i]); // << " "
        }
        cout << endl;
        delete[] numbers;
        numbers = NULL;
        delete[] letters;
        letters = NULL;
    }
    catch (int exception) {
        errorHandler("toChar", exception);
    }
}
void write() {
    try {
        string text;
        system("cls");
        system("Color 0A");
        intro();

        space(2); cout << "-Write-" << endl;
        space(3); cout << "Enter the text to convert:" << endl;

        cin.ignore();
        space(4); getline(cin, text); cout << endl;

        toInt(text);
    }
    catch (int exception) {
        errorHandler("write", exception);
    }
}
void toInt(string text) {
    try {
        int size = 0;
        system("cls");
        system("Color 0C");
        intro();

        space(2); cout << "-Write-" << endl;
        space(3); cout << "Text:" << endl;
        space(4); cout << text << endl << endl;

        int* values = new int[text.size()] {0};

        space(3); cout << "Code:" << endl;
        space(4); for (int i = 0; i < text.size(); i++)
        {
            values[i] = (int)text[i];   
            cout << values[i] << " ";
            size++;
        }
        cout << endl;
        save(values, size);
        delete[] values;
        values = NULL;
    }
    catch (int exception) {
        errorHandler("toInt", exception);
    }
}
bool save(int* values, int size) {
    try {
        fstream file;

        file.open("Code.txt", ios::out);
            if (file.is_open()) {
                file << "";
                file.close();
            }
            else {
                return false;
            }
        file.open("Code.txt", ios::app);
            if (file.is_open()) {
                for (int i = 0; i < size; i++) {
                    file << values[i] << " ";
                }
            }
            else {
                return false;
            }
            return true;
    }
    catch (int exception) {
        errorHandler("save", exception);
    }
}