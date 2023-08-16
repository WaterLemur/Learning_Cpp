#include <iostream>
#include <list>
#include "../def/System.h"

using std::cout;
using std::endl;
using std::string;
using std::list;

class YouTube_Channel {
public:
	string Name;
	string OwnerName;
	int SubscribersCount;
	list<string> PublishedVideoTitles;

	YouTube_Channel(string name, string owner_name) {
		Name = name;
		OwnerName = owner_name;
		SubscribersCount = 0;
	}
	void Get_Info() {
		cout << "Name: " << Name << endl;
		cout << "Owner name: " << OwnerName << endl;
		cout << "Subscribers count: " << SubscribersCount << endl;
		cout << "Videos:" << endl;
		for (string videoTitle : PublishedVideoTitles) {
			cout << " - " << videoTitle << endl;
		}

		cout << endl;
	}
};

void N2_What_are_How_to_use_CONSTRUCTORS_And_Class_METHODS() 
{
	try {
		Title(2.0f, "What are/How to use CONSTRUCTORS & Class METHODS");
		
		YouTube_Channel ytChannel("CodeBeauty", "Saldina");
		ytChannel.PublishedVideoTitles.push_back("C++ for beginners");
		ytChannel.PublishedVideoTitles.push_back("HTML & CSS for beginners");
		ytChannel.PublishedVideoTitles.push_back("C++ OPP");
		YouTube_Channel ytChannel2("AmySings", "Amy");

		ytChannel.Get_Info();
		ytChannel2.Get_Info();
	}
	catch (int ex) {

	}
}