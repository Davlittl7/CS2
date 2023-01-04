#include<vector>
#include<fstream>
#include "stack.hpp"
#include "utilities.hpp"
#include "../string/string.hpp"


String infix_to_postfix(const String& expr)
{
        stack<String> s;
        String left, right, op, token;
        unsigned long int i = 0;
        std::vector<String> split = expr.split(' ');

        while (i < split.size()) {
                token = split[i];
                if (token == ")") {
                        right = s.pop();
                        op = s.pop();
                        left = s.pop();
                        s.push(left + right + op);
                }
                else {
                        if (token != "(") {
                                s.push(split.at(i) + ' ');
                        }
                }
                ++i;
        }
        return left + right + op;
}


std::ostream& toAssembly(String postfix, std::ofstream& out)
{
	stack<String> s;
	String left, right, tmpAssem, currentToken;
	int tmpNumber = 1;
	unsigned long i = 0;
	std::vector<String> split = postfix.split(' ');

	while(i < split.size()) {
		currentToken = split.at(i);
		if (split.at(i) != "+" && split.at(i) != "-" && split.at(i) != "*" && split.at(i) != "/") {
			s.push(currentToken);
		}
		else {
			right = s.pop();
			left = s.pop();

			tmpAssem = "TMP" + intToString(tmpNumber++);

			evaluate(left, currentToken, right, out);
			s.push(tmpAssem);

			out << "   ST    " << tmpAssem << std::endl;
		}
		++i;
	}
	out << std::endl;
	return out;
}

void toAssembly(String postfix)
{
	stack<String> s;
	String left, right, tmpAssem, currentToken;
	int tmpNumber = 1;
	unsigned long i = 0;
	std::vector<String> split = postfix.split(' ');

	while (i < split.size()) {
		currentToken = split.at(i);
		if (split.at(i) != "+" && split.at(i) != "-" && split.at(i) != "*" && split.at(i) != "/") {
			s.push(currentToken);
		}
		else {
			right = s.pop();
			left = s.pop();

			tmpAssem = "TMP" + intToString(tmpNumber++);

			evaluate(left, currentToken, right);
			s.push(tmpAssem);

			std::cout << "   ST    " << tmpAssem << std::endl;
		}
		++i;
	}
	std::cout << std::endl;
}



String assemblyOperator(const String& op)
{
	switch (op[0]) {
	case '+':
		return "   AD    ";
		break;
	case '-':
		return "   SB    ";
		break;
	case '*':
		return "   MU    ";
		break;
	case '/':
		return "   DV    ";
		break;
	default:
		return "   UNDEFINED    ";
	}
}

String intToString(int x) 
{
	if (!x) {
		return '0';
	}

	String result;

	do {
		char tmp = ((x % 10) + '0');
		result = result + tmp;
		x = x / 10;
	} while (x > 0);

	return result;
}

String evaluate(String left, String t, String right)
{
	std::ofstream out;
	String oper;

	std::cout << "   LD    " << left << std::endl; 

	oper = assemblyOperator(t);
	std::cout << oper << right << std::endl;

	return left;
}

String evaluate(String left, String t, String right, std::ofstream& out)
{
	String oper;

        out << "   LD    " << left << std::endl;

	oper = assemblyOperator(t);
	out << oper << right << std::endl;

	return left;
}
