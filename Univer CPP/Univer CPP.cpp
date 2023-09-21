#include <iostream>

int main()
{
    std::cout << " lab_02_49, Roma Dzemchuk, PE23b, Group 6 " << std::endl; //Це я
    int year;
    std::cout << "Set Year: ";
    std::cin >> year;

    int century = (year - 1) / 100 + 1;

    std::cout << "Century: " << century << std::endl;

    return 0;
}
