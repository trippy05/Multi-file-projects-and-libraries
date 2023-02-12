#include <iostream>
#include "half.h"
using namespace std;

int get_number(int number) {
    cout << "Select an operation (1 - addition, 2 subtraction, 3 - multiplication, 4 - division, 5 - exponentiation): ";
    cin >> number;
    return number;
}
double add(double num1, double num2) { return num1 + num2; }
double sub(double num1, double num2) { return num1 - num2; }
double mult(double num1, double num2) { return num1 * num2; }
double div(double num1, double num2) { return num1 / num2; }
double expon(double num1, double num2) { return pow(num1, num2); }


