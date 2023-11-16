#include <iostream>
#include <vector>
#include <string>
#include <cmath>

struct HistoricalDate {
    int year;
    std::string event;

    HistoricalDate(int y, const std::string& e) : year(y), event(e) {}
};

double calculateAverageInterval(const std::vector<HistoricalDate>& dates) {
    if (dates.size() < 2) {
        std::cerr << "NOT ENOUGH DATES.\n";
        return 0.0;
    }

    double totalInterval = 0.0;
    for (size_t i = 1; i < dates.size(); ++i) {
        int interval = std::abs(dates[i].year - dates[i - 1].year);
        totalInterval += interval;
    }

    double averageInterval = totalInterval / (dates.size() - 1);
    return averageInterval;
}

int main() {
    std::vector<HistoricalDate> historicalDates = {
        {1776, "Declaration of Independence of the United States"},
        {1789, "French Revolution"},
        {1865, "End of the American Civil War"},
        {1914, "Start of World War I"},
        {1945, "End of World War II"}
    };

    double avgInterval = calculateAverageInterval(historicalDates);
    std::cout << "Average interval between historical dates: " << avgInterval << " years\n";

    return 0;

}
