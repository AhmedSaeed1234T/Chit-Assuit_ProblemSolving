
#include <iostream>
using namespace std;
int main()
{
	int inputdays;
	cin >> inputdays;
	int years = inputdays / 365;
	inputdays -= 365 * years;
	int month = inputdays / 30;
	inputdays -= 30 * month;
	cout << years << " years" << endl;
	cout << month << " months" << endl;
	cout << inputdays << " days" << endl;
	return 0;
}
