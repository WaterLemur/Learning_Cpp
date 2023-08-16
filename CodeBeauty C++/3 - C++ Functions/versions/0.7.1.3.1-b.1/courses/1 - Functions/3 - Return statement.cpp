#include "../1 - Functions.h"
#include <iostream>

using namespace std;

bool isPrimeNumber(int number) {

	bool isPrimeFlag = true;
	for (int i = 2; i < number; i++){
		if (number % i == 0) {
			isPrimeFlag = false;
			break;
		}
	}
	return isPrimeFlag;
}

void C1C3() {
	/*int number;
	cout << "Number: ";
	cin >> number;


	bool isPrimeFlag = isPrimeNumber(number);

	if (isPrimeFlag)
		cout << "Prime number" << endl;
	else
		cout << "Not prime number" << endl;*/

	int numberOfPrimes = 0;
	for (int i = 1; i < 100000; i++)
	{
		bool isPrime = isPrimeNumber(i);
		if (isPrime) {
			cout << i << " is prime number\n";
			numberOfPrimes++;
		}
	}
	cout << endl << "The number of primes is: " << numberOfPrimes;
}