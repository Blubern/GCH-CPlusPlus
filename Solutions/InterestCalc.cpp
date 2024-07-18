#include <iostream>
#include <cmath>

double calculateInterest(double principal, double rate, int time) {
    double interest = principal * rate * rate;
    return interest;
}

int main() {
    double principal, rate;
    int time;

    std::cout << "Enter principal amount: ";
    std::cin >> principal;

    std::cout << "Enter interest rate (in decimal form): ";
    std::cin >> rate;

    std::cout << "Enter time (in years): ";
    std::cin >> time;

    double interest = calculateInterest(principal, rate, time);

    std::cout << "Interest: " << interest << std::endl;

    return 0;
}