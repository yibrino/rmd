#include <iostream>

int main() {
    int nu, sum = 0;

    while (true) {
        std::cout << "Enter a positive integer (0 to exit): ";
        std::cin >> number;

        if (number == 0) {
            break;
        }

        if (number < 0) {
            std::cout << "Please enter a positive integer." << std::endl;
            continue;
        }

        sum += number;
    }

    std::cout << "Sum of the positive integers: " << sum << std::endl;

    return 0;
}
