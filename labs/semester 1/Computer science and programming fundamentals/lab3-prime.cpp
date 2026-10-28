#include <iostream>
#include <cmath>

int main() {
    int a, b, result;
    std::cout << "Enter a number: ";
    std::cin >> a;
    for (int i = 2; i < a; i++) {
        if (a % i == 0) {
            result = 1;
        }
        else {
            result = 0;
        }
        if (result == 1) {
            std::cout << a << " is divisible by " << i << std::endl;
        }   
    }
    if (result == 0) {
        std::cout << a << " is a prime number.";
    }
    else if (result == 1) {
        std::cout << a << " is not a prime number." << std::endl;
    }
    return 0;
}