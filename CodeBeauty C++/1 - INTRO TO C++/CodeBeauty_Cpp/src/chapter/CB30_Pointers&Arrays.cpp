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
//float number = 30;
//char chapter[] = "Pointers & Arrays";
//
//
//int main()
//{
//    _default();
//
//
//    //int luckyNumbers[5] = { 2,3,5,7,9 };
//    int luckyNumbers[5];
//    /*cout << "   " << luckyNumbers << endl;
//    cout << "   " << &luckyNumbers[0] << endl;
//    cout << "   " << luckyNumbers[2] << endl;
//    cout << "   " << *(luckyNumbers+2) << endl;*/
//
//    for (int i = 0; i <= 4; i++) {
//        cout << "   Number: ";
//        cin >> luckyNumbers[i];
//    }
//    cout << endl;
//    for (int i = 0; i <= 5; i++) {
//        cout << *(luckyNumbers + i) << "  ";
//    }
//
//
//    cin.get();
//    system("pause>0");
//}
//
//
//
//
//void space(int size) {
//    for (int i = 0; i < size; i++) {
//        cout << " ";
//    }
//}
//void _default() {
//    info();
//    title();
//}
//void info() {
//    printf(KMAG);
//
//    cout << endl;
//    space(1);
//    cout << "CodeBeauty - "
//        << "C++ FULL COURSE For Beginners "
//        << "(Learn C++ in 10 hours)"
//        << endl;
//}
//void title() {
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
//void printstart(string text) {
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
//void printred(string text) {
//    printf(KRED);
//    cout << text;
//    printf(KWHT);
//}