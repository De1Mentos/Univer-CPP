#include <iostream>
#include <vector>

int main() {
    int numRows, numCols;
    std::cout << "Enter the number of rows and columns: ";
    std::cin >> numRows >> numCols;

    std::vector<std::vector<int>> matrix(numRows, std::vector<int>(numCols));

    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            std::cout << "Enter an element [" << i << "][" << j << "]: ";
            std::cin >> matrix[i][j];
        }
    }

    int minProduct = 2147483647;
    int minColumnIndex = -1;

    for (int j = 0; j < numCols; j++) {
        int product = 1;
        bool allElementsWithinRange = true;

        for (int i = 0; i < numRows; i++) {
            if (abs(matrix[i][j]) <= 10) {
                product *= matrix[i][j];
            }
            else {
                allElementsWithinRange = false;
                break;
            }
        }

        if (allElementsWithinRange && product < minProduct) {
            minProduct = product;
            minColumnIndex = j;
        }
    }

    if (minColumnIndex != -1) {
        std::cout << "The column with the minimum product of elements: " << minColumnIndex << std::endl;
    }
    else {
        std::cout << "The matrix does not contain any columns that satisfy the condition." << std::endl;
    }

    return 0;
}