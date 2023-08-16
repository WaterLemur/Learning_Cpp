#include "Headers/12 - Copy CONSTRUCTORS.h"


class Book {
public:
	string Title;
	string Author;
	float* Rates;
	int RatesCounter;

	Book(string title, string author) {
		Title = title;
		author = author;

		RatesCounter = 2;
		Rates = new float[RatesCounter];
		Rates[0] = 4;
		Rates[1] = 5;

		cout << Title << " constructor invoked\n";
		cout << endl;
	}
	~Book() {
		delete[] Rates;
		Rates = nullptr;//NULL

		cout << Title << " destructor invoked\n";
		cout << endl;
	}
	Book(const Book& original) {

		Title = original.Title;
		Author = original.Author;
		RatesCounter = original.RatesCounter;

		Rates = new float[RatesCounter];
		for (int i = 0; i < RatesCounter; i++)
		{
			Rates[i] = original.Rates[i];
		}
	}
};


void PrintBook(Book book) {
	cout << "Title: " << book.Title << endl;
	cout << "Author: " << book.Author << endl;

	float sum = 0;
	for (int i = 0; i < book.RatesCounter; i++)
	{
		sum += book.Rates[i];
	}
	cout << "Avg rate: " << sum / book.RatesCounter << endl;
	cout << endl;
}

void N12_Copy_CONSTRUCTORS() {
	Title(12.0f, "Copy CONSTRUCTORS");


	Book book1("Millionaire Fastlane", "M. J. DeMarco");
	Book book2("C++ Lambda Story", "Bartek Filipek");
	cout << endl;

	Book book3(book1);//Book book3 = book1;
	PrintBook(book1);
	PrintBook(book2);
	PrintBook(book3);
}

