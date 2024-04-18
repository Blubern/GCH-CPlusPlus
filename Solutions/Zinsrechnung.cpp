//calculate interest not compound interest
#include <iostream>
#include <cmath>
using namespace std;

double berechneZinsen(double kapital, double zinssatz, int laufzeit) {
    return kapital * zinssatz / 100 * laufzeit;
}

void runZinsrechnung() {
    double kapital, zinssatz, zinsen;
    int laufzeit;

    cout << "Kapital: ";
    cin >> kapital;
    cout << "Zinssatz: ";
    cin >> zinssatz;
    cout << "Laufzeit: ";
    cin >> laufzeit;

    zinsen = berechneZinsen(kapital, zinssatz, laufzeit);
    cout << "Zinsen: " << zinsen << endl;
}