#include <iostream> 

int main() {
    double x, n, result;
    std::cout << "Enter a number: ";
    std::cin >> x;
    std::cout << "Enter the exponent: ";
    std::cin >> n;;
    for (int i = 0; i < n; i++) {
        x = x * x; 
    }
    result = x;
    std::cout << "The result is: " << result;
    return 0;
}