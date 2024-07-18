#include <iostream>
#include <cmath>

double calculateCompoundInterest(double principal, double rate, int time) {
    double amount = principal * pow((1 + rate / 100), time);
    double compoundInterest = amount - principal;
    return amount;
}

/*
int main() {
    double principal, rate;
    int time;

    std::cout << "Enter principal amount: ";
    std::cin >> principal;

    std::cout << "Enter interest rate: ";
    std::cin >> rate;

    std::cout << "Enter time (in years): ";
    std::cin >> time;

    double compoundInterest = calculateCompoundInterest(principal, rate, time);

    std::cout << "Compound Interest: " << compoundInterest << std::endl;

    return 0;
}*/
