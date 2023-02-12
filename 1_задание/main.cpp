#include <iostream>
#include "half.h"
using namespace std;

int main() {
    int number;
    double num1 = 0, num2 = 0;
    cout << "Enter num1:  ";
    cin >> num1;
    cout << "Enter num2:  ";
    cin >> num2;
    number = get_number(number);
    if (number == 1)
        cout << add(num1, num2) << endl;
    if (number == 2)
        cout << sub(num1, num2) << endl;
    if (number == 3)
        cout << mult(num1, num2) << endl;
    if (number == 4)
        cout << div(num1, num2) << endl;
    if (number == 5)
        cout << expon(num1, num2) << endl;
}