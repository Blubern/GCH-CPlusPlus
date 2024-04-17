// Calculate interest rate with compound interest
#include <cmath>

double berechneZinsen(double kapital, double zinssatz, int laufzeit) {
    return kapital * pow(1 + zinssatz / 100, laufzeit) - kapital;
}

void runZinsesZinsRechnung() {
    double kapital = 1000.0;
    double zinssatz = 5.0;
    int laufzeit = 2;

    double zinsen = berechneZinsen(kapital, zinssatz, laufzeit);
    std::cout << "Zinsen: " << zinsen << std::endl;
}

