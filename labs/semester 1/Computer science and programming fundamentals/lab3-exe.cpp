#include <iostream>
#include <cmath>

// modulo = %. allows to find the remainder of a division operation. 10 % 3 = 1. 

int main() {
    double a, b, c, d, e, sum, mean, product, max, min;
    sum = 0;
    product = 1;
    min = 10000000000;
    max = -10000000000;
    std::cout << "How many numbers do you want to enter? ";
    std::cin >> a;
            for (int i = 0; i < a; i++) {
                std::cout << "Enter number " << i + 1 << ": ";
                std::cin >> b;
                sum = sum + b;
                product = product * b;
                if (b > max) {
                    max = b;
                }
                if (b < min) {
                    min = b;
                }
            }
    mean = sum / a;
    std::cout << "The sum is: " << sum;
    std::cout << "The mean is: " << mean;
    std::cout << "The product is: " << product;
    std::cout << "The maximum is: " << max;
    std::cout << "The minimum is: " << min;
    return 0;
        }
