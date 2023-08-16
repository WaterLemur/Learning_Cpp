#include "../1 - Functions.h"
#include <iostream>

using namespace std;


int recursive_sum(int m, int n) {//m=2, n=4 
	if (m == n)
		return m;

	return m + recursive_sum(m + 1, n);
}

//sum numbers between m-n
void C1C6() 
{
	int m = 1, n = 552;
	cout << "Sum = " << recursive_sum(m, n);


	/*int sum = 0;
	for (int i = m; i <= n;i++) {
		sum += i;
	}
	cout << "Sum=" << sum;*/

	system("pause>0");
}