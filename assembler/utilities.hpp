#ifndef CS2_UTILITIES_HPP
#define CS2_UTILITIES_HPP

#include "stack.hpp"
#include "../string/string.hpp"
#include <iostream>
#include<vector>
#include<fstream>

String infix_to_postfix(const String&);
String evaluate(String left, String t, String right);
String evaluate(String left, String t, String right, std::ofstream& out);
std::ostream& toAssembly(String postfix, std::ofstream& out);
void toAssembly(String postfix);
String assemblyOperator(const String& op);
String intToString(int x);

#endif
