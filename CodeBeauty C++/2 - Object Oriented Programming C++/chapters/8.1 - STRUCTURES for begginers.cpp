#include "Headers/8.1 - STRUCTURES for begginers.h"
#include <iostream>
#include "../def/System.h"


struct Smartphone {
	string name;
	int storageSpace;
	string color;
	float price;
};

void N8_1_STRUCTURES_for_beginners() {
	try {
		Title(8.1f, "STRUCTURES for beginners");
		
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
		/*
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
		cout << "Name: " << smartphone2.name << endl;
		cout << "Storage space: " << smartphone2.storageSpace << endl;
		cout << "Color: " << smartphone2.color << endl;
		cout << "Price: " << smartphone2.price << endl;*/
	}
	catch (int ex) {

	}
}