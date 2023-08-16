#include <iostream>
#include "../def/System.h"
#include <list>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::list;

class YouTube_Channel {
private:
	string name;
	string owner_name;
	int subscribers_count;
	list<string> published_video_titles;
public:
	//Constructor
	YouTube_Channel(string Name, string OwnerName) {
		name = Name;
		owner_name = OwnerName;
		subscribers_count = 0;
	}
	//Accessors
	string Name() {
		return name;
	}
	void Name(string Name) {
		name = Name;
	}
	string Owner_Name() {
		return owner_name;
	}
	void Owner_Name(string Owner_name) {
		owner_name = Owner_name;
	}
	//Methods
	void Get_Info() {
		cout << "Name: " << name << endl;
		cout << "Owner name: " << owner_name << endl;
		cout << "Subscribers count: " << subscribers_count << endl;
		cout << "Videos:" << endl;
		for (string videoTitle : published_video_titles) {
			cout << " - " << videoTitle << endl;
		}
		cout << endl;
	}
	void Subscribe() {
		subscribers_count++;
	}
	void Unsubscribe() {
		if (subscribers_count > 0) {
			subscribers_count--;
		}
	}
	void Publish_Video(string title) {
		published_video_titles.push_back(title);
	}
};

void N3_What_is_ENCAPSULATION_in_programming()
{
	try {
		Title(3.0f, "What is ENCAPSULATION in programming");

		
		YouTube_Channel ytChannel("CodeBeauty", "Saldina");

		ytChannel.Publish_Video("C++ for beginners");
		ytChannel.Publish_Video("HTML & CSS for beginners");
		ytChannel.Publish_Video("C++ OPP");

		ytChannel.Unsubscribe();

		ytChannel.Get_Info();
	}
	catch (int ex) {

	}
}