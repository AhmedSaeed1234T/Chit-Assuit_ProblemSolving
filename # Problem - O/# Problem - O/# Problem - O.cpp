
#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    char opp;
    cin >> num1 >> opp >> num2;
    if (opp == '+') {
        cout << num1 + num2 << endl;
    }
    else if (opp == '-') {
        cout << num1 - num2 << endl;
    }
    else if (opp == '*') {
        cout << num1 * num2 << endl;
    }
    else if (opp == '/') {
        cout << num1 / num2 << endl;
    }
    return 0;
}