#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double x, result, func;
    cout << "Define X: ";
    cin >> x;

    if (x < 0) {
        func = 2 * x + 3;
    }
    else if (x >= 0 && x <= 5) {
        func = pow(x, 3) + 2;
    }
    else {
        func = 2 * x - 3;
    }
    cout << "F(x) = " << func << endl;
    return 0;
}

