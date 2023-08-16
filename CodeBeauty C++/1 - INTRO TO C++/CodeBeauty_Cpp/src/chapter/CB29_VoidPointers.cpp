//// Default
//// Default
//#include <iostream>
//
//using std::cout;
//using std::cin;
//using std::endl;
//
//using std::string;
//
//#define KMAG  "\x1B[35m"
//#define KYEL  "\x1B[33m"
//#define KWHT  "\x1B[37m"
//#define KRED  "\x1B[31m"
//
//void _default();
//void info();
//void title();
//
//void printlane(string text);
//void printstart(string text);
//void printmid(string text);
//void printend(string text);
//void printred(string text);
//
//float number = 29;
//char chapter[] = "Void Pointers";
//
//void printNumber(int* numberPtr) {
//    cout << "   " << *numberPtr << endl;
//}
//void printLetter(char* charPtr) {
//    cout << "   " << *charPtr << endl;
//}
//void print(void* ptr, char type) {
//    switch (type) {
//    case 'i':cout << "   " << *((int*)ptr) << endl; break;
//    case 'c':cout << "   " << *((char*)ptr) << endl; break;
//    case 'e':cout << "   " << *((float*)ptr) << endl; break;
//    case 'r':cout << "   " << *((char*)ptr) << endl; break;
//    }
//}
//
//int main()
//{
//    _default();
//
//
//    int number = 5;
//    char letter = 'a';
//    //printNumber(&number);
//    //printLetter(&letter);
//    print(&number, 'i');
//    print(&letter, 'c');
//    cout << endl;
//    print(&number, 'e');
//    print(&number, 'r');
//
//    system("pause>0");
//    return 0;
//}
//
//
//
//
//void space(int size){
//    for (int i = 0; i < size; i++) {
//        cout << " ";
//    }
//}
//void _default(){
//    info();
//    title();
//}
//void info(){
//    printf(KMAG);
//
//    cout << endl;
//    space(1);
//    cout << "CodeBeauty - "
//         << "C++ FULL COURSE For Beginners "
//         << "(Learn C++ in 10 hours)"
//         << endl;
//}
//void title(){
//    printf(KYEL);
//
//    space(2);
//    cout << number << " - " << chapter;
//    cout << endl << endl;
//
//    printf(KWHT);
//}
//
//
//
//void printlane(string text) {
//    space(3);
//    cout << "   " << text << endl;
//}
//void printstart(string text){
//    space(3);
//    cout << "   " << text;
//}
//void printmid(string text) {
//    cout << text;
//}
//void printend(string text) {
//    cout << text << endl;
//}
//
//void printred(string text){
//    printf(KRED);
//    cout << text;
//    printf(KWHT);
//}