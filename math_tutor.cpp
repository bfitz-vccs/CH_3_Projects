#include <iostream>
#include <random>
#include <iomanip>
#include <string>

int main(){

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<>dist(1, 1000);

    /*
    Because this is for a young student and the instructions are not as restrictive, 
    I am choosing to output positive integers as my random numbers.
    I initially tried just outputting random integers, but this was producing large numbers 
    which when added would produce a negative answer due to the sum being larger than
    2^31 -1 (e.g. 956558418 + 1627330731 = -1711078147)
    I am also opting to use a uniform distribution so that the student can get practice
    across numbers which are equally likely to occur.
    */

    int rand_num1 = dist(gen);
    int rand_num2 = dist(gen);
    int answer = rand_num1 + rand_num2;

    std::cout << std::setw(1) << " " << std::setw(3) << rand_num1 << std::endl;
    std::cout << std::setw(1) << "+" << std::setw(3) << rand_num2;
    std::cin.get();
    std::cout << std::setw(4) << answer << std::endl;
    /*
    The output is configured so that everything is right-aligned.
    */

    return 0;
}