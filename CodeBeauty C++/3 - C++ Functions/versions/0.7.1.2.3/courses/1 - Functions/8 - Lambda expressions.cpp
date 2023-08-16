#include "../1 - Functions.h"
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
//using namespace std;

void C1C8() 
{
	//[](int x) {
	//	if (x % 2 == 0)
	//		std::cout << x << " is even number\n";
	//	else
	//		std::cout << x << " is odd number\n";
	//};
	//[](int x){std::cout << x << "\n";}
	
	//[cc](p) {fd};
	int d = 7, e = 5;
	std::vector <int> v{2, 3, 7, 14, 23};
	std::for_each(v.begin(), v.end(), [&](int x) {//[=]
		if (x % d == 0)
			std::cout << x << " is divisible by" << d << "\n";
		else
			std::cout << x << " is not divisible by" << d << "\n";
	
		d = 10;
		e = 19;
		std::cout << "d=" << d;
	});

	[](int x) {std::cout << x << "\n";};


	system("pause>0");
}