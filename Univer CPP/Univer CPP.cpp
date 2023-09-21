#include <iostream>

int main()
{
    int year;
    std::cout << "Set Year: ";
    std::cin >> year;

    int century = (year - 1) / 100 + 1;

    std::cout << "Century: " << century << std::endl;

    return 0;
}

//pog