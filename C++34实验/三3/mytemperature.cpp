// mytemperature.cpp
#include "mytemperature.h"
#include <cmath>

double celsius_to_fah(double cel) {
    return (cel * 9 / 5) + 32;
}

double fahrenheit_to_cels(double fah) {
    return (fah - 32) * 5 / 9;
}
#include <iostream>
int main() {
    std::cout << "Celsius\tFahrenheit\t|\tFahrenheit\tCelsius" << std::endl;

    double celsius[] = { 40.0, 39.0, 38.0, 37.0, 36.0, 35.0, 34.0, 33.0, 32.0, 31.0 };
    double fah[] = { 105.0, 102.0, 100.0, 98.6, 97.0, 95.0, 93.2, 91.4, 89.6, 87.8 };
    int size = sizeof(celsius) / sizeof(celsius[0]);

    for (int i = 0; i < size; ++i) {
        std::cout << celsius[i] << "\t" << celsius_to_fah(celsius[i]) << "\t|\t"
            << fah[i] << "\t\t" << fahrenheit_to_cels(fah[i]) << std::endl;
    }

    return 0;
}