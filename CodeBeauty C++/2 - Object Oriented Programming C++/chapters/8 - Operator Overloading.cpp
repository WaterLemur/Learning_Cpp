#include "Headers/8 - Operator Overloading.h"
#include "../def/System.h"
#include<list>

using std::cout;
using std::cin;
using std::endl;
using std::ostream;
using std::list;


struct YouTube_Channel {
	string Name;
	int Subscribers_count;

	YouTube_Channel(string name, int subscribers_count) {
		Name = name;
		Subscribers_count = subscribers_count;
	}
	bool operator==(const YouTube_Channel& channel) const{
		return this->Name == channel.Name;
	}
};

//void operator<<(ostream& COUT, YouTube_Channel& ytChannel) {
//	COUT << "Name: " << ytChannel.Name << endl;
//	COUT << "Subscribers: " << ytChannel.Subscribers_count << endl;
//}
ostream& operator<<(ostream& COUT, YouTube_Channel& ytChannel) {
	COUT << "Name: " << ytChannel.Name << endl;
	COUT << "Subscribers: " << ytChannel.Subscribers_count << endl << endl;
	return COUT;
}

struct MyCollection {
	list<YouTube_Channel> myChannels;

	void operator+=(YouTube_Channel& channel) {
		this->myChannels.push_back(channel);
	}
	void operator-=(YouTube_Channel& channel) {
		this->myChannels.remove(channel);
	}
};
ostream& operator<<(ostream& COUT, MyCollection& myCollection) {
	for (YouTube_Channel ytChannel : myCollection.myChannels) {
		COUT << ytChannel << endl;
	}
	return COUT;
}


void N8_Operator_Overloading() {
	try{
		Title(8.0f, "Operator Overloading");


		YouTube_Channel yt1 = YouTube_Channel("CodeBeaurty", 75000);
		//cout << yt1;

		YouTube_Channel yt2 = YouTube_Channel("My second channel", 80000);
		//cout << yt1 << yt2;


		operator<<(cout, yt1);


		MyCollection myCollection;
		myCollection += yt1;
		myCollection += yt2;
		myCollection -= yt2;
		cout << myCollection;
	}
	catch(int ex){

	}
}