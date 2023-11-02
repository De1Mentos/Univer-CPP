#include <iostream>

void printReverse(int n) {
    if (n == 0)
    {
        return;
    }
    else {
        std::cout << n % 10;
        printReverse(n / 10);
    }
}

int main() {
    int n;
    std::cout << "Enter a natural number : ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "The entered number must be a natural number." << std::endl;
    }
    else {
        std::cout << "The number is in reverse order: ";
        printReverse(n);
        std::cout << std::endl;
    }

    return 0;
}