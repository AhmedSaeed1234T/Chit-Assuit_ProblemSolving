
#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
	char operation;
    cin >> num1 >> operation >> num2;
	switch (operation)
	{
	case '=':
		if (num1 == num2) {
			cout << "Right" << endl;
		}
		else {
			cout << "Wrong" << endl;
		}
		break;
	case '>':
		if (num1 > num2) {
			cout << "Right" << endl;
		}
		else {
			cout << "Wrong" << endl;
		}
		break;
	case'<':
		if (num1 < num2) {
			cout << "Right" << endl;
		}
		else {
			cout << "Wrong" << endl;
		}
		break;
	default:
		cout << "Wrong" << endl;
	}
    return 0;
}
