#include <iostream>

using namespace std;

int main() {

	cout << "Pointers and Const\n" << endl;

	int x = 5;

	const int* xPtr = &x;

	int y = 15;

	xPtr = &y;

	cout << "The value of xPtr is: " << *xPtr << endl;

	int* const yPtr = &y;

	*yPtr = 19;

	cout << "The value of yPtr is: " << *yPtr << endl;

	const int& xRef = x;

	const int* const xPtr2 = &x;// means the same of line 26

	return 0;
}