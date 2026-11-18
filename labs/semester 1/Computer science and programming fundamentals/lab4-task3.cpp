#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double c, x;
    int n, count = 0;
    double arg, sum = 0;
    double array[100];
    cout << "Enter value for c: ";
    cin >> c;
    cout << "Enter value for x: ";
    cin >> x;
    cout << "Enter the number of elements: ";
    cin >> n;
    for(int i=0; i<n; i++) {
      double func = exp(c*sin(2*x*i));
      double arg = c*sin(2*x*i);
        array[i] = arg;
        if (array[i] < 0) {
            sum += func;
        }
        cout << "Value of function at index " << i << ": " << func << endl;
    }
    cout << "Sum for negativefunction values: " << sum << endl;
}