//Davonte Littleton
//2 April 2021

#include<iostream>
#include<vector>
#include<fstream>
#include "../string/string.hpp"
#include "../assembler/utilities.hpp"

String infix_to_prefix(const String&);

int main() {
  int i = 0;
  std::ifstream in("data3-1.txt");
  if(!in.is_open()) {
	std::cout << "Could not open file";
	return 0;
  }
  String ct;
  char t[300];
  while(!in.eof()) {
	if(in.getline(t, 300, ';')) {
		ct = String(t);
		if(ct[0] == '\r') {
			int length = ct.length() - 1;
			ct = ct.substr(2, length);
		}
		if(i == 5) {
			break;
		}
		String prefix = infix_to_prefix(ct);
		std::cout << "Infix expression is: " << ct << std::endl;
		std::cout << "Prefix expression is: " << prefix << std::endl;
		++i;
	}
	std::cout << std::endl;
  }
  in.close();
}

String infix_to_prefix(const String& expr)
{
	stack<String> s;
	String left, right, op, token;
	int i = 0;
	std::vector<String> split = expr.split(' ');

	while (i < split.size()) {
		token = split[i];
		if (token == ")") {
			right = s.pop();
			op = s.pop();
			left = s.pop();
			s.push(op + left + right);
		}
		else {
			if (token != "(") {
				s.push(split.at(i) + ' ');
			}
		}
		++i;
	}
	std::cout << std::endl;
	return op + left + right;
}

