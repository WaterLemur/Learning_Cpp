#include "Headers/11 - Destructors.h"


class Book {
public:
	string Title;
	string Author;
	int* Rates;
	int RatesCounter;

	Book(string title, string author) {
		Title = title;
		author = author;

		RatesCounter = 2;
		Rates = new int[RatesCounter];
		Rates[0] = 4;
		Rates[1] = 5;

		cout << Title << " constructor invoked\n";
	}
	~Book() {
		delete[] Rates;
		Rates = nullptr;//NULL

		cout << Title << " destructor invoked\n";
	}
};

void N11_Destructors() {
	Title(11.0f, "Destructors");


	Book book1("Millionaire Fastlane", "M. J. DeMarco");
	Book book2("C++ Lambda Story", "Bartek Filipek");
	cout << endl;


}

