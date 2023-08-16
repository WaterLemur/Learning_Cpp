#include "../2 - Pointers.h"

#include <iostream>
#include <memory>
using namespace std;


class MyClass {
public:
	MyClass() {
		cout << "Constructor invoked" << endl;
	}
	~MyClass() {
		cout << "Destructor invoked" << endl;
	}
};
void C2C7()
{
	{
		//unique_ptr<int>unPtr1 = make_unique<int>(25);
		//unique_ptr<int>unPtr2 = move(unPtr1);
		////cout << unPtr1 << endl;
		////cout << *unPtr1 << endl;
		//cout << *unPtr2 << endl;
		//cout << *unPtr1 << endl;
		{
			unique_ptr<MyClass>unPtr1 = make_unique<MyClass>();
		}

		shared_ptr<MyClass>shPtr1 = make_shared<MyClass>();
		cout << "Shared cout: " << shPtr1.use_count() << endl;
		{
			shared_ptr<MyClass>shPtr2 = shPtr1;
			cout << "Shared cout: " << shPtr1.use_count() << endl;

		}
		cout << "Shared cout: " << shPtr1.use_count() << endl;

	}
	cout << endl << endl;
	weak_ptr<int> wePtr1;
	{
		shared_ptr<int>shPtr1 = make_shared<int>(25);
		wePtr1 = shPtr1;
	}
	
	system("pause>0");
}