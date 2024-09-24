
#include <iostream>
using namespace std;
int main()
{
    string name1, name2, name3;
    cin >> name1 >> name2;
    cin >> name1 >> name3;
    if (name2 == name3) {
        cout << "ARE Brothers" << endl;
    }
    else {
        cout << "NOT" << endl;
    }
    return 0;
}
