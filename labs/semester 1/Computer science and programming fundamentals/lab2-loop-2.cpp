#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x, i;
    double number, sum = 0, avg, pro;
    cout << "Enter the number of elements: ";
    cin >> x;
    while (i > 8) {
        cout << "Please enter a number less than or equal to 8: ";
        cin >> x;
        i++;
        i = 0;

        sum = number + sum;
        avg = sum / x;
        pro = number * pro;

        cout << "The sum of the numbers is: " << sum;
        cout << "The average of the numbers is: " << avg;
        cout << "The product of the numbers is: " << pro;

    }

    return 0;
}