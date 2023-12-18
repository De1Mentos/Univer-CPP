#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>

void countAndPrintHistogram(const std::string& fileName) {
    std::ifstream inputFile(fileName);

    if (!inputFile.is_open()) {
        std::cerr << "Unable to open the file." << std::endl;
        return;
    }

    std::vector<int> wordLengthCount(16, 0);

    std::string word;
    while (inputFile >> word) {
        size_t wordLength = std::min(word.length(), static_cast<size_t>(15));
        wordLengthCount[wordLength]++;
    }

    // Вивід гістограми
    std::cout << "Word Length Histogram:" << std::endl;
    for (size_t i = 1; i < wordLengthCount.size(); ++i) {
        std::cout << std::setw(2) << i << " characters: ";
        for (int j = 0; j < wordLengthCount[i]; ++j) {
            std::cout << '*';
        }
        std::cout << std::endl;
    }

    // Загальна кількість слів
    int totalWords = 0;
    for (int count : wordLengthCount) {
        totalWords += count;
    }

    std::cout << "Total words: " << totalWords << std::endl;
}

int main() {
    std::string fileName = "input.txt";
    countAndPrintHistogram(fileName);

    return 0;
}