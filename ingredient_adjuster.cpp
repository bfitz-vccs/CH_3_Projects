#include <iostream>

int main(){
    float sugar_amt = 1.5;
    float butter_amt = 1.0;
    float flour_amt = 2.75;
    float batch_size = 48.0;
    // I am using a float for the 48 cookies per batch so that I do not run into issues with integer division with user input.
    int num_cookies;
    std::cout << "Enter the desired number of cookies as an integer: ";
    std::cin >> num_cookies;
    
    float ingredient_ratio = num_cookies / batch_size;
    float required_sugar = sugar_amt * ingredient_ratio;
    float required_butter = butter_amt * ingredient_ratio;
    float required_flour = flour_amt * ingredient_ratio;

    std::cout << "Sugar: " << required_sugar << std::endl;
    std::cout << "Butter: " << required_butter << std::endl;
    std::cout << "Flour: " << required_flour << std::endl;

    return 0;
}