#include <iostream>
#include <cmath>
#include <iomanip>

int main(){

    float principal;
    float interest_rate;
    int times_compounded;

    std::cout << "Please enter in the principal amount: ";
    std::cin >> principal;
    std::cout << "Please enter in the interest rate: ";
    std::cin >> interest_rate;
    std::cout << "Please enter in the number of times the interest is compounded each year: ";
    std::cin >> times_compounded;

    float savings_amt = principal * std::pow((1 + ((interest_rate / 100) / times_compounded)), times_compounded);
    float interest = savings_amt - principal;

    std::cout << "Interest Rate: \t\t  " << interest_rate << "%" << std::endl;
    std::cout << "Times Compounded: \t  " << times_compounded << std::endl;
    std::cout << "Principal: \t\t$ " << std::setprecision(6) << principal << std::endl;
    std::cout << "Interest: \t\t$ " << std::setprecision(4) << interest << std::endl;
    std::cout << "Amount in Savings: \t$ " << std::setprecision(6) << savings_amt << std::endl;
    
    return 0;
}