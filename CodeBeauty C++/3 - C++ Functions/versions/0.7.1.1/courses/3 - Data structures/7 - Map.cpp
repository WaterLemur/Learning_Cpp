#include "../3 - Data structures.h"

#include <iostream>
#include <map>
#include <unordered_map>
#include<string>

#include <list>

using namespace std;

void C3C7_Part1() {
	//unordered_map<string, string> myDictionary;
	map<string, string> myDictionary;


	myDictionary.insert(pair<string, string>("Strawberry", "die Erdbeere"));
	myDictionary.insert(pair<string, string>("Orange", "die Orange, die Apfelsine"));
	myDictionary.insert(pair<string, string>("Apple", "der Apfel"));
	myDictionary.insert(pair<string, string>("Banana", "die Banane"));


	myDictionary["Strawberry"] = "Die Erdbeere";
	myDictionary.clear();
	cout << myDictionary.size() << endl;


	for (auto pair : myDictionary)
		cout << pair.first << " - " << pair.second << endl;

}
void C3C7()
{
	//C3C7_Part1();
	map<string, list<string>> pokedex;

	list<string> pikachuAttacks{"thunder shock", "tail whip", "quick attack"};
	list<string> charmanderAttacks{"flame thrower", "scary face"};
	list<string> chikoritaAttacks{"razor leaf", "poison powder"};


	pokedex.insert(pair<string, list<string>>("Pikachu", pikachuAttacks));
	pokedex.insert(pair<string, list<string>>("Charmander", charmanderAttacks));
	pokedex.insert(pair<string, list<string>>("Chikorita", chikoritaAttacks));


	for (auto pair : pokedex) {
		cout << pair.first << " - ";

		for (auto attack : pair.second)
			cout << attack << ", ";

		cout << endl;
	}
	system("pause>0");
}