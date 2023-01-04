//==============================================================================
// Basics for openning a file for milestone 2 of Project 1.
//

#include <iostream>
#include <fstream>
#include <cstdlib>
#include "bigint.hpp"

int main() {
        std::ifstream in("data1-1.txt");    // Define stream for input
        if (!in) {                           // Make sure it opened correctly.
            std::cerr << "Could not open data1-1.txt, exiting." << std::endl;
            exit(1);
        }

        //Until end of file
           //Read two bigints
           //Print them out
           //Add them together
        bigint lhs, rhs;
        while (in >> lhs && in >> rhs)
        {
            // Output the two bigints
            std::cout << "The left bigint is:   " << lhs << '\n';
            std::cout << '\n';
            std::cout << "The right bigint is:  " << rhs << '\n';

            // Adds the bigint values together
            bigint result = lhs + rhs;
            std::cout << '\n';
            // Outputs the resulting bigint
            std::cout << "The resulting bigint is: " << result << '\n' << '\n';
        }
       in.close();
}

