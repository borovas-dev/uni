# include <iostream>
using namespace std;

int main() {
int n, array[100];
double sum = 0, max = -100000;
cout << "enter the number of elements";
cin >> n;
    for(int i=0; i<n; i++) {
      cout << "enter number " << i << endl;
      cin >> n;
        int array[i];
        if (i > max) {
            max = i;
        }
            sum += i;
    }
    cout << "maximum value is " << max << endl;
    cout << "mean is " << sum / n << endl;
    cout << "array is " << array[n] << endl;

}