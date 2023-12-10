#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

void createFile(const std::vector<double>& numbers, const std::string& filename) {
    std::ofstream file(filename);
    if (!file) {
        std::cerr << "Failed to open file: " << filename << std::endl;
        return;
    }

    for (const auto& num : numbers) {
        file << num << "\n";
    }
}

void rewriteFile() {
    std::ifstream file("numbers.txt");
    if (!file) {
        std::cerr << "Failed to open file: numbers.txt" << std::endl;
        return;
    }

    std::vector<double> numbers;
    std::string line;
    while (std::getline(file, line)) {
        numbers.push_back(std::stod(line));
    }

    // Reverse the order of the components
    for (int i = 0; i < numbers.size() / 2; ++i) {
        std::swap(numbers[i], numbers[numbers.size() - 1 - i]);
    }

    file.close();

    createFile(numbers, "numbers.txt");
}

int main() {
    std::vector<double> numbers = { 3.14, 2.71, 1.618 };
    createFile(numbers, "data.txt");
    rewriteFile();

    return 0;
}
