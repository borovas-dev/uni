// int is for integer (whole numbers), eg. 1. int number;

//float or double is for decimal numbers (double is more precise)

//letter is char 

// bool type - true/false, akin to logic

# include <iostream>
# include <cmath>
using namespace std;

int main() {
    double a, b, add, divide, multiply, subtract;
    cout << "enter number 1: ";
    cin >> a;
    cout << "enter number 2: ";
    cin >> b;
    add = a + b;
    subtract = a - b;
    multiply = a * b;
    divide = a / b;

    double operation;
    cout << "what operation would you like to perform? (add = 1, subtract = 2, multiply = 3, divide = 4)";
    cin >> operation;

    if (operation == 1) {
        cout << "the result is:" << add;
    }
    else if (operation == 2) {
        cout << "the result is:" << subtract;
    }
    else if (operation == 3) {
        cout << "the result is:" << multiply;
    }
    else if (operation == 4) {
        cout << "the result is:" << divide;
    }
    else {
        cout << "invalid operation";
    }

    return 0;
}