/*
// Default
// Default
#include <iostream>
#include<list>

using std::cout;
using std::cin;
using std::endl;

using std::string;

using std::list;

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



float number = 23;
char chapter[] = "Introduction to OOP, What are classes & cbjects";


class YouTubeChannel {
public:
    string Name;
    string OwnerName;
    int SubscriberCount;
    list<string> PublishedVideoTitles;
};

int main()
{
    _default();


    YouTubeChannel ytChannel;
    ytChannel.Name = "CodeBeauty";
    ytChannel.OwnerName = "Saldina";
    ytChannel.SubscriberCount = 1800;
    ytChannel.PublishedVideoTitles = {"C++ for begginers Video 1", "HTML & CSS Video 1", "C++ OPP Video 1"};

    cout << "   Name : " << ytChannel.Name << endl;
    cout << "   Owner name : " << ytChannel.OwnerName << endl;
    cout << "   Subscriber count : " << ytChannel.SubscriberCount << endl;
    cout << "   Videos : " << endl;
    for (string videoTitle : ytChannel.PublishedVideoTitles) {
         cout << "   " << videoTitle << endl;
    }



    system("pause>0");
}




void space(int size){
    for (int i = 0; i < size; i++) {
        cout << " ";
    }
}
void _default(){
    info();
    title();
}
void info(){
    printf(KMAG);

    cout << endl;
    space(1);
    cout << "CodeBeauty - "
         << "C++ FULL COURSE For Beginners "
         << "(Learn C++ in 10 hours)"
         << endl;
}
void title(){
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
void printstart(string text){
    space(3);
    cout << "   " << text;
}
void printmid(string text) {
    cout << text;
}
void printend(string text) {
    cout << text << endl;
}

void printred(string text){
    printf(KRED);
    cout << text;
    printf(KWHT);
}
*/