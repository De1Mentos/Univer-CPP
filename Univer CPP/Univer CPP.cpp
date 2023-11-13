#include <iostream>
#include <string>


int STOI(const std::string& str, int index = 0, int result = 0) 
{
    // Базовий випадок: якщо індекс досягнув кінця рядка, повертаємо результат.
    if (index == str.length()) {
        return result;
    }

    // Отримуємо цифру, перетворюємо її в int і додаємо до результату.
    int digit = str[index] - '0';
    result = result * 10 + digit;

    // Рекурсивно викликаємо функцію для наступної цифри.
    return STOI(str, index + 1, result);
}

int main() {
    std::string str = "12345"; // Рядок десяткових цифр
    int number = STOI(str);    // Виклик рекурсивної функції для перетворення

    std::cout << "Result: " << number << std::endl;
    return 0;
}
