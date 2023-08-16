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
	int content_quality;
public:
	//Constructor
	YouTube_Channel(string Name, string OwnerName) {
		name = Name;
		owner_name = OwnerName;
		subscribers_count = 0;
		content_quality = 0;
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
	void Check_Analitics() {
		if (content_quality<5) {
			cout << name << " has bad quality content." << endl;
		}
		else {
			cout << name << " has great content." << endl;
		}
	}
};

class Cooking_Youtube_Channel :public YouTube_Channel {
public:
	Cooking_Youtube_Channel(string Name, string Owner_name) :YouTube_Channel(Name, Owner_name) {

	}
	void Practice() {
		cout << owner_name << " is practicing cooking, learning new recipes, experimenting whit spices..." << endl;
		content_quality++;
	}
};

class Singers_Youtube_Channel :public YouTube_Channel {
public:
	Singers_Youtube_Channel(string Name, string Owner_name) :YouTube_Channel(Name, Owner_name) {

	}
	void Practice() {
		cout << owner_name << " is practicing classes, learning new songs, learning how to dance..." << endl;
		content_quality++;
	}
};

void N5_What_is_POLYMORPHISM()
{
	try {
		Title(5.0f, "What is POLYMORPHISM");


		Cooking_Youtube_Channel cookingYtChannel("Amy's Kitchen", "Amy");
		Singers_Youtube_Channel signersYtChannel("JohnSings", "John");

		YouTube_Channel* yt1 = &cookingYtChannel;
		YouTube_Channel* yt2 = &signersYtChannel;

		Cooking_Youtube_Channel* cyt = &cookingYtChannel;
		Singers_Youtube_Channel* syt = &signersYtChannel;
		cyt->Practice();
		syt->Practice();
		syt->Practice();
		syt->Practice();
		syt->Practice();
		syt->Practice();


		yt1->Check_Analitics();
		yt2->Check_Analitics();
	}
	catch (int ex) {

	}
}