#include <iostream> 

int main() {
    double x, n, result=1;
    std::cout << "Enter a number: ";
    std::cin >> x;
    std::cout << "Enter the exponent: ";
    std::cin >> n;
    for (int i = 1; i <= n; i++) {
        result *= x;
    }
    std::cout << "The result is: " << result;
    return 0;
}