

#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;
    int max, min, def;
    if (num1 >= num2 && num1 >= num3) {
        max = num1;
        if (num2 >= num3) {
            min = num3;
            def = num2;
        }
        else {
            min = num2;
            def = num3;
        }
    }
    else if (num2 >= num1 && num2 >= num3) {
        max = num2;
        if (num1 >= num3) {
            min = num3;
            def = num1;
        }
        else {
            min = num1;
            def = num3;
        }
    }
    else {
        max = num3;
        if (num1 >= num2) {
            min = num2;
            def = num1;
        }
        else {
            min = num1;
            def = num2;
        }
    }
    cout << min << "\n" << def << "\n" << max << endl << endl;
    cout << num1 << "\n" << num2 << "\n" << num3 << endl;
    return 0;
}
