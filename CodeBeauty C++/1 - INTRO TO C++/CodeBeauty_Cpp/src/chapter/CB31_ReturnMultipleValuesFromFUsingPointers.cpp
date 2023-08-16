////B21_2_POINTERSReturnMultipleValuesFromFunction.cpp
//#include <iostream>
//
//using namespace std;
//void space(int amount);
//
//int getMax(int numbers[], int size) {
//	int max = numbers[0];
//	for (int i = 1; i < size; i++) {
//		if (numbers[i] > max) {
//			max = numbers[i];
//		}
//	}
//	numbers[0] = 99;
//	return max;
//}
//void getMinAndMax(int numbers[], int size, int min, int max) {
//	for (int i = 1; i < size; i++) {
//		if (numbers[i] > max) {
//			max = numbers[i];
//		}
//		if (numbers[i] < min) {
//			min = numbers[i];
//		}
//	}
//	max = 69;
//}
//int main() {
//
//	int numbers[5] = { 5,4,-2,29,6 };
//	cout << getMax(numbers, 5) << endl;
//	cout << numbers[0] << endl;
//	int min = numbers[0], max = numbers[0];
//	cout << endl <<"max: " << max;
//	getMinAndMax(numbers, 5, min, max);
//	cout << endl << "max: " << max;
//
//	space(10);
//
//	system("pause>0");
//	return 0;
//}
//
//void space(int amount) {
//	for (int i = amount; i > 0; i--) {
//		cout << " ";
//	}
//}
//void print(int amount) {
//	space(amount);
//}