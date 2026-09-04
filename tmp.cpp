#include <iostream>
#include <cmath>

void fc(double temp, char unit);

int main() {
    double temp;
    char unit;
    std::cout << "******Temperature Converter*****" << std::endl;
    std::cout << "Enter the temperature: ";
    std::cin >> temp;
    std::cout << "Enter the unit (C for Celsius, F for Fahrenheit): ";
    std::cin >> unit;

    std::cout << "********************************" << std::endl;

    fc(temp, unit);

    return 0;
}

void fc(double temp, char unit) {
    if (unit == 'C' || unit == 'c') {
        double fahrenheit = std::round((temp * 9.0 / 5.0) + 32);
        std::cout << temp << "°C is equal to " << fahrenheit << "°F" << std::endl;
    } else if (unit == 'F' || unit == 'f') {
        double celsius = (temp - 32) * 5.0 / 9.0;
        std::cout << temp << "°F is equal to " << celsius << "°C" << std::endl;
    } else {
        std::cout << "Invalid unit entered!" << std::endl;
    }
}