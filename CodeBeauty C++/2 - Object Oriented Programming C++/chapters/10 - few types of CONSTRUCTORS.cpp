#include "Headers/10 - few types of CONSTRUCTORS.h"
#include "../def/System.h"



class User {

	string FirstName;
	string LastName;
	int Age;
	string Email;
	//emptry default ctor
	//USer(){}
	//default ctor
public:
	User() {
		FirstName = "nn";
		LastName = "nln";
		Age = 0;
		Email = "not set";
	}

	//params ctor
	User(string fName, string lName, int age) {
		FirstName = fName;
		LastName = lName;
		Age = age;
		Email = fName + "." + lName + "@mail.com";
	}

	void Print() {
		cout << "First name: " << FirstName << endl;
		cout << "Last name: " << LastName << endl;
		cout << "Age name: " << Age << endl;
		cout << "Email: " << Email << endl;
		cout << endl;
	}
	friend void user_info(User);
};


void N10_few_types_of_CONSTRUCTORS() {
	try {
		Title(10.0f, "Few types of CONSTRUCTORS");

		
		User user1;
		User user2("saldina", "nurak", 27);

		user_info(user1);
		user_info(user2);

		user2.Print();
		cout << user2;
	}
	catch (int ex) {

	}
}



void user_info(User u) {
	try {
		cout << "First name: " << u.FirstName << endl;
		cout << "Last name: " << u.LastName << endl;
		cout << "Age name: " << u.Age << endl;
		cout << "Email: " << u.Email << endl;
		cout << endl;
	}
	catch (int ex) {

	}
}

ostream& operator<<(ostream& COUT, User& u) {
	try {
		user_info(u);
		return COUT;
	}
	catch (int ex) {

	}
}