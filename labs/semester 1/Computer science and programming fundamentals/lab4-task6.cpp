#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;
int main() {
    int N = 100;
    int arr[N];
    int n = 0;

    cout << "enter a number up to " << N << " integers (enter 1000000 to stop):" << endl;
    for (int i = 0; i < N; i++) {
        int o;
        cin >> o;

        if (o == 1000000) {
            break; 
        }

        arr[n] = o;
        n++;
    }

   
    double negSum = 0;
    int negCount = 0;
    int maxOdd;
    bool foundOdd = 0;

    for (int i = 0; i < n; i++) {
    
        if (arr[i] < 0) {
            negSum += arr[i];
            negCount++;
        }

        if (arr[i] % 2 != 0) {
            if (!foundOdd || arr[i] > maxOdd) {
                maxOdd = arr[i];
                foundOdd = true;
            }
        }
    }

    if (negCount > 0) {
        cout << "average of negative values: " << (negSum / negCount) << endl;
    } else {
        cout << "no negative values" << endl;
    }

    if (foundOdd) {
        cout << "maximum odd value: " << maxOdd << endl;
    } else {
        cout << "error: no odd values" << endl;
    }

    if (n >= 2) {
        int maxDiff = 0;
        for (int i = 0; i < n - 1; i++) {
            int diff = arr[i] - arr[i + 1];
            if (diff < 0) {
                diff = -diff; 
            }

            if (diff > maxDiff) {
                maxDiff = diff;
            }
        }
        cout << "max modulus difference: " << maxDiff << endl;
    } else {
        cout << "need at least 2 numbers to calculate differences." << endl;
    }
}