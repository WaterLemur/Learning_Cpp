#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

struct Smartphone {
	string name;
	int storageSpace;
	string color;
	float price;
};

struct Person {
	string name;
	int age;
	Smartphone smartphone;
};

void print_smartphone_info(Smartphone smartphone) {
	cout << "Name: " << smartphone.name << endl;
	cout << "Storage space: " << smartphone.storageSpace << endl;
	cout << "Color: " << smartphone.color << endl;
	cout << "Price: " << smartphone.price << endl;
}

void print_person_info(Person person) {
	cout << "Name: " << person.name << endl;
	cout << "Age : " << person.age << endl << endl;
	print_smartphone_info(person.smartphone);
}
int main() {
	try {
		string name = "iPhone 12";
		int storageSpace = 32;
		string color = "black";
		float price = 999.99f;

		string name2 = "Samsung Galaxy S21 Ultra";
		int storageSpace2 = 64;
		string color2 = "gray";
		float price2 = 888.88f;

		Smartphone smartphone;
		smartphone.name = "iPhone 12";
		smartphone.storageSpace = 32;
		smartphone.color = "black";
		smartphone.price = 999.99f;

		Smartphone smartphone2;
		smartphone2.name = "Samsung Galaxy S21 Ultra";
		smartphone2.storageSpace = 64;
		smartphone2.color = "gray";
		smartphone2.price = 888.88f;

		cout << "PHONE 1\n";
		cout << "Name: " << smartphone.name << endl;
		cout << "Storage space: " << smartphone.storageSpace << endl;
		cout << "Color: " << smartphone.color << endl;
		cout << "Price: " << smartphone.price << endl;

		cout << "\nPHONE 2\n";
		print_smartphone_info(smartphone2);
		cout << endl << endl;

		Person p;
		p.name = "Saldina";
		p.age = 26;
		p.smartphone = smartphone2;
		print_person_info(p);



		cout << endl;
		int i;
		cin >> i;

	}
	catch (int ex) {

	}
}