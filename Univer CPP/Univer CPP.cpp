#include <iostream>

int main() {
    double usd_to_uah = 27.65;

    double eur_to_uah = 33;

    std::cout << "Dollars\tGrivnas\tEuros\tGrivnas" << std::endl;

    for (int i = 1; i <= 10; ++i) {
        double dollars = i;
        double euros = i * eur_to_uah / usd_to_uah;
        std::cout << dollars << "\t" << dollars * usd_to_uah << "\t" << euros << "\t" << euros * usd_to_uah << std::endl;
    }

    return 0;
}