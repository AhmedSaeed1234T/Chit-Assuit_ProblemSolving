
#include <iostream>
using namespace std;
int main()
{
	double num;
	cin >> num;
	int numInt = num;
	double numFlo = num - numInt;
	if (numFlo != 0) {
		cout << "float " << numInt << " " << numFlo << endl;
	}
	else {
		cout << "int " << numInt << endl;
	}
	return 0;
}