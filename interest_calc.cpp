#include <iostream>
#include <cmath>

int main(){

    float principal;
    float interest_rate;
    float times_compounded;

    std::cout << "Please enter in the principle amount: ";
    std::cin >> principal;
    std::cout << "Please enter in the interest rate: ";
    std::cin >> interest_rate;
    std::cout << "Please enter in the number of times the interest is compounded each year: ";
    std::cin >> times_compounded;

    float savings_amt = principal * std::pow((1 + ((interest_rate / 100) / times_compounded)), times_compounded);
    float interest = savings_amt - principal;

    std::cout << "Interest Rate: " << interest_rate << "%" << std::endl;
    std::cout << "Times Compounded: " << times_compounded << std::endl;
    std::cout << "Principal: $" << principal << std::endl;
    std::cout << "Interest: $" << interest << std::endl;
    std::cout << "Amount in Savings: $" << savings_amt << std::endl;
    
    return 0;
}