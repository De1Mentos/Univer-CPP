#include <iostream>
#include <cmath>

int main() {
        int n;
        const int k = 3;
        std::cout << "Set a natural number n: ";
        std::cin >> n;

        if (n < 0) {
            std::cout << "Error. int n cannot be below 0." << std::endl;
            return 1;
        }

        int digits[k];

        // Вираховуємо кожну старшу цифру і зберігаємо її у масив
        int tempN = n;
        for (int i = k - 1; i >= 0; i--) {
            digits[i] = tempN % 10;
            tempN /= 10;
        }

        // Використовуємо масив для підрахунку кількості унікальних цифр
        int uniqueCount = 0;
        for (int i = 0; i < k; i++) {
            bool isUnique = true;
            for (int j = 0; j < i; j++) {
                if (digits[i] == digits[j]) {
                    isUnique = false;
                    break;
                }
            }
            if (isUnique) {
                uniqueCount++;
            }
        }

        std::cout << "The number of different digits " << k << " in the first higher digits of the number " << n << " is equal " << uniqueCount << "." << std::endl;

        return 0;
}