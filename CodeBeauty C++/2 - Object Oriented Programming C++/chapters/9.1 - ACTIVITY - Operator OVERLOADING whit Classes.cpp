#include "Headers/9.1 - ACTIVITY - Operator OVERLOADING whit Classes.h"
#include "../def/System.h"



class YouTube_Channel2 {
	string Name;
	int Subscribers_count;
public:
	YouTube_Channel2(string name, int subscribers_count) {
		Name = name;
		Subscribers_count = subscribers_count;
	}
	bool operator==(const YouTube_Channel2& channel) const {
		return this->Name == channel.Name;
	}
	friend ostream& operator<<(ostream&, YouTube_Channel2&);
};

ostream& operator<<(ostream& COUT, YouTube_Channel2& ytChannel) {
	COUT << "Name: " << ytChannel.Name << endl;
	COUT << "Subscribers: " << ytChannel.Subscribers_count << endl << endl;
	return COUT;
}

class MyCollection2 {
	list<YouTube_Channel2> myChannels;
public:
	void operator+=(YouTube_Channel2& channel) {
		this->myChannels.push_back(channel);
	}
	void operator-=(YouTube_Channel2& channel) {
		this->myChannels.remove(channel);
	}
	friend ostream& operator<<(ostream&, MyCollection2&);
};

ostream& operator<<(ostream& COUT, MyCollection2& myCollection) {
	for (YouTube_Channel2 ytChannel : myCollection.myChannels) {
		COUT << ytChannel << endl;
	}
	return COUT;
}



void N9_1_ACTIVITY_Operator_OVERLOADING_whit_Classes() {
	try {
		Title(9.1f, "ACTIVITY - Operator OVERLOADING whit Classes");


		YouTube_Channel2 yt1 = YouTube_Channel2("CodeBeaurty", 75000);
		//cout << yt1;

		YouTube_Channel2 yt2 = YouTube_Channel2("My second channel", 80000);
		//cout << yt1 << yt2;


		operator<<(cout, yt1);


		MyCollection2 myCollection;
		myCollection += yt1;
		myCollection += yt2;
		myCollection -= yt2;
		cout << myCollection;
	}
	catch (int ex) {

	}
}