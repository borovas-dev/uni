#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    double sum = 0, m, sd;
    int array[100], n;
    cout << "enter the number of elements";
    cin >> n;
    for(int i=0; i<n; i++) {
        array[i] = rand() % 11 - 10;
        sum += array[i];
    }
    m = sum / n;
    for(int i=0; i<n; i++) {
        sd += pow(array[i] - m, 2);
    }
    sd = sqrt(sd / n);
    cout << "mean: " << m << endl;
    cout << "standard deviation: " << sd << endl;
    cout << "interval of values: [" << m - sd << ", " << m + sd << "]" << endl;
    int count = 0;
    for (int i=0; i<n; i++) {
        if (array[i] >= m - sd && array[i] <= m + sd) {
            count++;
        }
    }
    cout << "num of values in interval: " << count << endl;
    return 0;
}