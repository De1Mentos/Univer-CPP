#include <iostream>
#include <string>
#include <unordered_map>

bool isEachLetterAtMostTwice(const std::string& str) {
    std::unordered_map<char, int> letterCount;

    for (char ch : str) {
        if (std::isalpha(ch)) {
            char lowercaseCh = std::tolower(ch);
            letterCount[lowercaseCh]++;
            if (letterCount[lowercaseCh] > 2) {
                return false;
            }
        }
    }

    return true;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    if (isEachLetterAtMostTwice(input)) {
        std::cout << "Each letter is entered no more than twice in a line." << std::endl;
    }
    else {
        std::cout << "There are letters that appear more than twice in a line." << std::endl;
    }

    return 0;
}