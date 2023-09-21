#include <iostream>

int main() {
    double usd_to_uah = 27.65;

    double eur_to_uah = 33;

    std::cout << "Dollars Grivnas Euros   Grivnas" << std::endl;

    for (int i = 1; i <= 10; ++i) {
        double dollars = i;
        double euros = i;
        std::cout << dollars << "\t" << dollars * usd_to_uah << "\t" << euros << "\t" << euros * eur_to_uah << std::endl;
    }

    return 0;
}