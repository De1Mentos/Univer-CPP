#include <iostream>
#include <cstdlib>  
#include <ctime>   

int main() {
    int n;
    std::cout << "Amount of elements (n < 50): ";
    std::cin >> n;

    if (n < 1 || n >= 50) {
        std::cout << "Error. Number should be in between 1 to 49" << std::endl;
        return 1;
    }

    int* arr = new int[n];

    std::srand(static_cast<unsigned>(std::time(0)));

    std::cout << "Massive with " << n << " number was created: ";
    for (int i = 0; i < n; i++) {
        arr[i] = std::rand() % 2;
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    bool strictAlternation = true;
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            strictAlternation = false;
            break;
        }
    }

    if (strictAlternation) {
        std::cout << "Cherguvannia True -  0 and 1." << std::endl;
    }
    else {
        std::cout << "Cherguvannia False - 0 and 1." << std::endl;
    }

    delete[] arr;

    return 0;
}