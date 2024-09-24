

#include <iostream>
using namespace std;
int main()
{
	char myChar, resChar;
	cin >> myChar;
	int askii = myChar;
	if (askii >= 97 && askii <= 122)   //lower case
	{ 
		askii -= 32;
		resChar = askii;
		cout << resChar << endl;
	}
	else {
		askii += 32;
		resChar = askii;
		cout << resChar << endl;
	}
	return 0;
}
