#include <iostream>
#include <fstream>
#include <cstdlib>
#include "bigint.hpp"

int main() {
        std::ifstream in("data1-2.txt");    // Define stream for input
        if (!in) {                           // Make sure that it is opens correctly.
            std::cerr << "Could not open data1-2.txt, exiting." << std::endl;
            exit(1);
        }

        //Until end of file
           //Read two bigints
           //Print them out
           //Multiply them together
        bigint lhs, rhs;
        while (in >> lhs && in >> rhs)
        {
            // Output the two bigints
            std::cout << "The left bigint is:   " << lhs << '\n';
            std::cout << '\n';
            std::cout << "The right bigint is:  " << rhs << '\n';

            // Multiplies the bigint values together
            bigint result = lhs * rhs;
            std::cout << '\n';
            // Outputs the resulting bigint
            std::cout << "The resulting bigint is: " << result << '\n' << '\n';
        }
       in.close();
}


