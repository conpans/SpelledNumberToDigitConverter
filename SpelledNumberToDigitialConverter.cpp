#include "std_lib_facilities.h"

int main()
{
	cout << "Please enter a spelled-out number (zero, one, two, three, four): ";
	string word;
	cin >> word;

	if (word == "zero") {
		cout << "0" << "\n";
	}
	else if (word == "one") {
		cout << "1" << "\n";
	}
	else if (word == "two") {
		cout << "2" << "\n";
	}
	else if (word == "three") {
		cout << "3" << "\n";
	}
	else if (word == "four") {
		cout << "4" << "\n";
	}
	else {
		cout << "not a number I know" << "\n";
	}
}
