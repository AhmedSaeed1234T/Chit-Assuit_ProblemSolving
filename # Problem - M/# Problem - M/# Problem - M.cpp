
#include <iostream>
using namespace std;
int main()
{
	
	char mychar;
	cin >> mychar;
	if (mychar >= 97 && mychar <= 122)
	{
		cout << "ALPHA" << endl;
		cout << "IS SMALL" << endl;
	}
	else if (mychar >= 65 && mychar <= 90)
	{
		cout << "ALPHA" << endl;
		cout << "IS CAPITAL" << endl;
	}
	else
		cout << "IS DIGIT" << endl;
	return 0;
}  

