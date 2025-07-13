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

    std::cout << "The total amount available is: " << savings_amt << std::endl;
    return 0;
}