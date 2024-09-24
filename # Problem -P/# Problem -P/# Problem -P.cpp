
#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int result = num / 1000;
    if (result % 2 == 0) {
        cout << "EVEN" << endl;
    }
    else {
        cout << "ODD" << endl;
    }
    return 0;
}

