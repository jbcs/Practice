#include <iostream>
#include <vector>

using namespce std;

int main(int arg, char **argc)
{
	int iAge = 0;
	string strFName;
	string strLName;

	cout << "Please enter your age: ";
	cin >> iAge;

	cout << "Please enter your first name: ";
	cin >> strFName;

	cout << "Please enter your last name: ";
	cin >> strLName;

	cout << "Got it going on!" << endl;
	return EXIT_SUCCESS;
}
