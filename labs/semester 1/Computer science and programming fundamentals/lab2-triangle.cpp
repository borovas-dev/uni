#include <iostream>
#include <cmath>
using namespace std;

 int main(){

    double a, b, c;
    cout << "Enter the first side of the triangle: ";
    cin >> a;
    cout << "Enter the second side of the triangle: ";
    cin >> b;
    cout << "Enter the third side of the triangle: ";
    cin >> c;

    if (a + b > c || a + c > b || b + c > a) {
        
        cout << "The triangle is valid.";
    }
    else {
        cout << "The triangle is not valid.";
    }

    if (a == b && b == c) {
        cout << "The triangle is equilateral."; 
    }
    else if (a == b || a == c || b == c) {
        cout << "The triangle is isosceles.";
    }
    else {
        cout << "The triangle is scalene.";
    }

    return 0;


}