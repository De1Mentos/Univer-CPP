#include <iostream>
#include <string>


int STOI(const std::string& str, int index = 0, int result = 0) 
{
    if (index == str.length()) {
        return result;
    }

    int digit = str[index] - '0';
    result = result * 10 + digit;

    return STOI(str, index + 1, result);
}

int main() {
    std::string str = "12345";
    int number = STOI(str);

    std::cout << "Result: " << number << std::endl;
    return 0;
}
