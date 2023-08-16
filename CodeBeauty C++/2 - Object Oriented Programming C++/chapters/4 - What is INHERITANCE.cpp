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
	int subscribers_count;
	list<string> published_video_titles;
protected:
	string owner_name;
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
	string Owner_name() {
		return owner_name;
	}
	void Owner_name(string Owner_name) {
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

class Cooking_Youtube_Channel :public YouTube_Channel {
public:
	Cooking_Youtube_Channel(string Name, string Owner_name):YouTube_Channel(Name,Owner_name){
		
	}
	void Practice() {
		cout << owner_name << " is practicing cooking, learning new recipes, experimenting whit spices..." << endl;
	}
};
void N4_What_is_INHERITANCE()
{
	try {
		Title(4.0f, "What is INHERITANCE");


		Cooking_Youtube_Channel cookingYtChannel("Amy's Kitchen", "Amy");
		Cooking_Youtube_Channel cookingYtChannel2("John's Kitchen", "John");
		cookingYtChannel.Publish_Video("Apple pie");
		cookingYtChannel.Publish_Video("Chocolate cake");
		cookingYtChannel.Subscribe();
		cookingYtChannel.Subscribe();

		cookingYtChannel.Get_Info();

		cookingYtChannel.Practice();
		cookingYtChannel2.Practice();
	}
	catch (int ex) {

	}
}