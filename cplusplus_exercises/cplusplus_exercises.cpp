// cplusplus_exercises.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "romanNumeralConverter.h"

using namespace std;
using namespace jakeperry;

void printSolution(const string s) {
    std::cout << "> " << s << " represents the integer value " << romanNumeralConverter::romanToInteger(s) << std::endl;
}

int main()
{
    string input;
    while (true) {
        std::cout << "Enter a roman numeral value, or type \"end\" to exit." << std::endl << "> ";

        std::cin >> input;
        if (input == "end") break;

        printSolution(input);
    }
}
