#include<cstdlib>
#include<fstream>
#include<iostream>
#include "../string/string.hpp"
#include "utilities.hpp"
#include "stack.hpp"
#include<vector>


int main(int argc, char* argv[]) {

        //Enters into the data file
        std::ifstream in(argv[1]);
        if (!in.is_open()) {
                std::cout << "Could not open file\n";
                return 1;
        }

        std::ofstream out(argv[2]);

        String ct;
        char t[300];

        //Goes until the completion of the file
        while (!in.eof()) {
                if (in.getline(t, 300, ';')) {

                        //Takes a line of the expression
                        ct = String(t);


                        if (ct[0] == '\r') {
                                int length = ct.length() - 1;
                                ct = ct.substr(2, length);
                        }

                        //Converts it to the postfix version
                        String postfix = infix_to_postfix(ct);


                        //Checks for parameter to create a new file to output to
                        //Or if it should just output to the log
                        if (argc == 2) {
                                if (ct.length() > 2) {
                                        std::cout << "Infix Expression is: " << ct << std::endl;
		                        std::cout << "Postfix Expression is: " << postfix << std::endl;
					//Converts postfix into assembler
					toAssembly(postfix);
                                }
                        }
                        else if (argc == 3) {
                                if (ct.length() > 2) {
                                        out << "Infix Expression is: " << ct << std::endl;
                                        out << "Postfix Expression is: " << postfix << std::endl;
					toAssembly(postfix, out);
                                }
                        }

                        std::cout << std::endl;

                }
        }

        //Closes both files
        in.close();
        out.close();
}

